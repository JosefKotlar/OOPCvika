#include <iostream>

#include "client.h"
#include "account.h"
#include "partneraccount.h"
#include "bank.h"

using namespace std;


int main()
{
	Bank* komercka=new Bank(10,10);
	Client* c=komercka->CreateClient(0,"Petr Novak");
	Client* c1=komercka->CreateClient(1,"Pavel Polak");
	Client* c2=komercka->CreateClient(2,"Adam Krovak");
	Client* c3=komercka->CreateClient(3,"Petr Pavel");

	komercka->CreateAccount(0,c);
	komercka->CreateAccount(1,c2,3.0);
	komercka->CreateAccount(323,c1,c2,0.2);
	komercka->CreateAccount(3,c3,c1);

	komercka->GetAccount(1)->Deposit(250);
	komercka->GetAccount(0)->Deposit(150);
	komercka->GetAccount(3)->Deposit(300);
	komercka->GetAccount(323)->Deposit(100);

	cout<< "pocet klientu:"	<< Client::GetObjectsCount() <<endl;
	cout<< "pocet uctu:"	<< Account::GetObjectsCount() <<endl;
	
	komercka->PrintAll();
	komercka->AddInterest();	
	Account::SetDefaultInterestRate(3.1415); //zmeni urok u vsech uctu s vychozim urokem
	cout<< "*******************" <<endl;
	komercka->PrintAll();
	delete komercka;
	cout<< "*******************" <<endl<< "Po smazani:" <<endl;
	cout<< "pocet klientu:"	<< Client::GetObjectsCount() <<endl;
	cout<< "pocet uctu:"	<< Account::GetObjectsCount() <<endl;
	return 0;
}