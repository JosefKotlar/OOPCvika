#ifndef ordinace
#define ordinace
#include <vector>
#include <iostream>

#include "pacienti.h"
#include "ukony.h"
using namespace std;
class Clinic
{
private:
    vector<Patient*> patients;
    vector<Action*> actions;
public:
    Clinic();
    void AddPatient(Patient* pt);
    void AddAction(Action* at);
    Patient* SearchPatient(int n); 
    void Print(); //vypis databaze
    void Storno(); //zruseni vsech ukonu
    ~Clinic();
};
#endif