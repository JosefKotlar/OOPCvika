#include "ordinace.h"
void Clinic::AddPatient(Patient* pt)
{
    patients.push_back(pt);
}

void Clinic::AddAction(Action* at)
{
    actions.push_back(at);
}

Clinic::Clinic() //diky vektoru neni nutne nic nastavovat
{
}

Clinic::~Clinic() //je treba smazat seznamy pacientu a ukonu
{
    for (int i = 0; i < patients.size(); i++)
    {
        delete patients.at(i);
    }
    for (int i = 0; i < actions.size(); i++)
    {
        delete actions.at(i);
    }
}
Patient* Clinic::SearchPatient(int n)
{
    for (int i = 0; i < patients.size(); i++)
    {
        if (patients.at(i)->GetId()==n)
            return patients.at(i);
    }
    return nullptr;
}
void Clinic::Print()
{
    cout<< "Pacienti:"<<endl;
    for (int i = 0; i < patients.size(); i++)
    {
        cout << patients.at(i)->GetName()<<endl;
    }
    cout<< "Ukony:"<<endl;
    for (int i = 0; i < actions.size(); i++)
    {
        cout<< actions.at(i)->GetName()<< "  " <<actions.at(i)->GetPatient()->GetName()<<endl;
    }
    cout<<endl<<endl;
}
void Clinic::Storno()
{
    for (int i = 0; i < actions.size(); i++)
    {
        actions.at(i)->Storno();
    }
}