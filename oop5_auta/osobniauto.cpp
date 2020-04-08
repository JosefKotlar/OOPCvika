#include "osobniauto.h"
bool OsobniAuto::otevriOkno()
{
	return okno;
}
bool OsobniAuto::nastup()
{
	if (pocetlidi<4)
	{
		pocetlidi++;
		return true;
	}	
	return false;	
}
void OsobniAuto::popis()
{
	cout<< "Osobni vuz[  celkova hmotnost:"<< vratVahu()<<" pasazeri:"<<spocitejLidi()<< " okno:"<<okno << "]"<<endl ;
}
 OsobniAuto::OsobniAuto(int hm):Auto(hm)
{
    okno=false;
}
 OsobniAuto::~OsobniAuto()
{

}
