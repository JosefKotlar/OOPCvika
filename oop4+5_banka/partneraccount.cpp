#include "partneraccount.h"
Client* PartnerAccount::GetPartner()
{
    return partner;
}
void PartnerAccount::Print()
{
    cout<< GetNumber()<< "> Owner: [";
    GetOwner()->Print();	
    cout << "] Partner: [";
	GetPartner()->Print();
	cout<< "] Balance: " << GetBalance()<< " IR:" << GetInterestRate();
}
PartnerAccount::PartnerAccount(int n, Client*c,Client* p):Account(n,c)
{
	partner=p;
}
PartnerAccount::PartnerAccount(int n, Client*c,Client* p, double ir):Account(n,c,ir)
{
	partner=p;
}