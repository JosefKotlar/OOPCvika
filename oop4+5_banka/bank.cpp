#include "bank.h"
Bank::Bank(int c, int a)
{
    clients = new Client*[c];
    clientsCount=0;
    accountsCount=0;
    accounts = new Account *[a];
    maxClientsCount=c;
    maxAccountsCount=a;
}
Bank::~Bank()
{
    for (int i = 0; i < clientsCount; i++)
	{
	 	delete clients[i];
	}
    delete[] clients;
	for (int i = 0; i < accountsCount; i++)
	{
	 	delete accounts[i];
	}
    delete[] accounts;
}

Client *Bank::GetClient(int c)
{    
    for (int i = 0; i < clientsCount; i++)
	{
	 	if (clients[i]->GetCode() == c)
		{
			return clients[i];
		}
	}	
	return nullptr;
}
Account *Bank::GetAccount(int a)
{    
    for (int i = 0; i < accountsCount; i++)
	{
	 	if (accounts[i]->GetNumber() == a)
		{
			return accounts[i];
		}
	}	
	return nullptr;
}
Client *Bank::CreateClient(int c, std::string n)
{    
    clients[clientsCount] = new Client(c, n);
    clientsCount++;
    return clients[clientsCount-1];
}
Account *Bank::CreateAccount(int n, Client *c)
{
    accounts[accountsCount] = new Account(n, c);
    accountsCount++;
    return accounts[accountsCount-1];
}
Account* Bank::CreateAccount(int n, Client *c, double ir)
{
    accounts[accountsCount] = new Account(n, c, ir);
    accountsCount++;
    return accounts[accountsCount-1];
}
PartnerAccount* Bank::CreateAccount(int n, Client *c, Client *p)
{
	PartnerAccount* pa=new PartnerAccount(n, c,p);
    accounts[accountsCount] = pa;
    accountsCount++;
    return pa;
}
PartnerAccount* Bank::CreateAccount(int n, Client *c, Client *p, double ir)
{
	PartnerAccount* pa=new PartnerAccount(n, c, p, ir);
    accounts[accountsCount] = pa;
    accountsCount++;
    return pa;
}
void Bank::AddInterest()
{
    for (int i = 0; i < accountsCount; i++)
    {
        accounts[i]->AddInterest();
    }    
}

void Bank::PrintClients()
{
    for (int i = 0; i < clientsCount; i++)
    {
        clients[i]->Print();
        cout<<endl;
    }
}
void Bank::PrintAccounts()
{
    for (int i = 0; i < accountsCount; i++)
    {
        accounts[i]->Print();
        cout<<endl;
    }
}
void Bank::PrintAll()
{
    PrintClients();
    PrintAccounts();
}