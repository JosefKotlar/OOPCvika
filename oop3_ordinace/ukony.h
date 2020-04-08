#ifndef ukony_h
#define ukony_h

#include <string>
#include "pacienti.h"

using namespace std;

class Action
{
private:
    Patient* pat;
    string name;
public:
    Action(string nm,Patient* pt);
    string GetName();
    Patient* GetPatient();
    void Storno();
    ~Action();
};
#endif