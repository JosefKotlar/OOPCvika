#include "account.h"

int Account::objectsCount=0;
double Account::defaultInterestRate=0.128;

Account::Account(int n, Client *c)
{
    number=n;
	balance=0;
	interestRate=0;
	owner=c;	
	Account::objectsCount++;
}
Account::Account(int n, Client *c, double ir)
{
    number=n;
	balance=0;
	interestRate=ir;
	owner=c;	
	Account::objectsCount++;
}
int Account::GetNumber()
{
    return number;
}
double Account::GetBalance()
{
    return balance;
}
double Account::GetInterestRate()
{
	if (interestRate==0)//Kazdy nenastaveny ucet vraci vychozi urok.
		return defaultInterestRate;
    return interestRate;
}
Client *Account::GetOwner()
{
    return owner;
}
bool Account::CanWithdraw(double a)
{
    return (balance>=a);
}

void Account::Deposit(double a)
{
    balance+=a;
}
bool Account::Withdraw(double a)
{
    if (CanWithdraw(a))
    {
        balance-=a;
        return true;
    }
    return false;
}
void Account::AddInterest()
{
    balance+=balance*GetInterestRate();
}
void Account::Print()
{
    cout<< GetNumber()<< "> Owner: [";
    GetOwner()->Print();
    cout << "] Balance: " << GetBalance()<< " IR:" << GetInterestRate();
}
Account::~Account()//neni treba nic dalsiho mazat, pouze snizi pocet
{
	Account::objectsCount--;
}

int Account::GetObjectsCount()
{
	return Account::objectsCount;
}

void Account::SetDefaultInterestRate(double i)
{
	Account::defaultInterestRate=i;
}