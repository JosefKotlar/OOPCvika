#ifndef bank
#define bank

#include <iostream>
#include "client.h"
#include "account.h"
#include "partneraccount.h"

using namespace std;

class Bank
{
private:
	Client** clients;
	int clientsCount;
	int maxClientsCount;
	Account** accounts;
	int accountsCount;	
	int maxAccountsCount;	
public:
	Bank(int c, int a);	
	~Bank();
	
	Client* GetClient(int c);
	Account* GetAccount(int a);
	Client* CreateClient(int c, std::string n);
	Account* CreateAccount(int n, Client* c);
	Account* CreateAccount(int n, Client* c, double ir);
	PartnerAccount* CreateAccount(int n, Client* c, Client* p);
	PartnerAccount* CreateAccount(int n, Client* c, Client* p, double ir);

	void AddInterest();
	void PrintClients();
	void PrintAccounts();
	void PrintAll();
};

#endif