#ifndef account
#define account

#include "client.h"
#include <iostream>

using namespace std;

class Account
{
private:
	static int objectsCount;
	static double defaultInterestRate;
	int number;
	double balance;
	double interestRate;
	Client* owner;
	Client* partner;
public:
	Account(int n, Client*c);
	Account(int n, Client*c,double ir);
	Account(int n, Client*c,Client* p, double ir);
	Account(int n, Client*c,Client* p);
	int GetNumber();
	double GetBalance();
	double GetInterestRate();
	Client* GetPartner();
	Client* GetOwner();
	bool CanWithdraw(double a);

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();
	void Print();
	~Account();
	static int GetObjectsCount();
	static void SetDefaultInterestRate(double i);
};
#endif