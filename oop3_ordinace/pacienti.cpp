#include "pacienti.h"

string Patient::GetName()
{
    return name;
}
int Patient::GetId()
{
    return id;
}

Patient::Patient(int i, string n)
{
    id=i;
    name=n;
}
Patient::~Patient() //pacient nic na heap nealokuje, neni treba prepisovat
{
}