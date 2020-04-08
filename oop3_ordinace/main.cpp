#include "pacienti.h"
#include "ukony.h"
#include "ordinace.h"

using namespace std;

int main()
{
    Clinic* ord= new Clinic();
    ord->AddPatient(new Patient(232,"Antonin Dvorak"));
    ord->AddPatient(new Patient(5,"Ana Svetla"));
    ord->AddPatient(new Patient(112,"Zdenek Sverak"));
    ord->AddAction(new Action("Operace kycli",ord->SearchPatient(232)));
    ord->AddAction(new Action("Pravidelna prohlidka",ord->SearchPatient(5)));
    ord->AddAction(new Action("Zubni kontrola",ord->SearchPatient(112)));
    ord->Print();
    ord->Storno();
    ord->Print();
    delete ord;
    cout<< "Konec.";
    return 0;
}