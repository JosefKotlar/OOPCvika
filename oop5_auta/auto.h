#pragma once
#include <iostream>
using namespace std;
class Auto
{
protected:	
	int pocetlidi;
private:    
    int hmotnost;
public:       
    int spocitejLidi();
    bool nastup(); //maximalne ridic
    int vratVahu();
	int vratVahuNapravy();
     Auto(int a);
     ~Auto();
	 virtual void popis();
};
