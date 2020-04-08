#ifndef pacienti_h
#define pacienti_h

#include <string>
using namespace std;

class Patient
{
private:
    int id;
    string name;
public:
    Patient(int i, string n);
    string GetName();
    int GetId();
    ~Patient();
};
#endif