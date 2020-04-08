#include "auto.h"

void Auto::popis()
{
	cout << "Obecne auto[ hmotnost:"<< vratVahu()<<" ridic:"<< spocitejLidi() <<"]"<<endl;
}
int Auto::spocitejLidi()
{
	return pocetlidi;
}
bool Auto::nastup()
{
	if (pocetlidi==0)
	{
		pocetlidi++;
		return true;
	}	
	return false;
}
int Auto::vratVahu()
{    
	return pocetlidi*65+hmotnost;	
}
int Auto::vratVahuNapravy()
{
    return hmotnost;	
}
 Auto::Auto(int hm)
{
    pocetlidi=0;
    hmotnost=hm;
}
 Auto::~Auto()
{

}