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
public:
	Account(int n, Client*c);
	Account(int n, Client*c,double ir);	
	int GetNumber();
	double GetBalance();
	double GetInterestRate();	
	Client* GetOwner();
	bool CanWithdraw(double a);

	void Deposit(double a);
	bool Withdraw(double a);
	void AddInterest();
	virtual void Print();
	~Account();
	static int GetObjectsCount();
	static void SetDefaultInterestRate(double i);
};
#endif