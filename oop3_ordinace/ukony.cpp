#include "ukony.h"

string Action::GetName()
{
    return name;
}

Patient* Action::GetPatient()
{
    return pat;
}
Action::Action(string nm,Patient* pt)
{
    name=nm;
    pat=pt;
}
void Action::Storno()
{
    name="-zruseno-";
}

Action::~Action()//ukon nic na heap nealokuje, neni treba prepisovat
{
}
