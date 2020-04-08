#include "nakladniauto.h"
bool NakladniAuto::nastup()
{
	if (pocetlidi<2)
	{
		pocetlidi++;
		return true;
	}	
	return false;
}
bool NakladniAuto::naloz(int na)
{
	if ((na+naklad) < 300)
	{
		naklad+=na;
		return true;
	}
	return false;
}
int NakladniAuto::vratVahu()
{
    return naklad+pocetlidi*65+vratVahuNapravy();
}
void NakladniAuto::popis()
{
	cout<< "Nakladni vuz[  celkova hmotnost:"<< vratVahu()<<" pasazeri:"<<spocitejLidi()<<"]"<<endl;
}
 NakladniAuto::NakladniAuto(int hm):Auto(hm)
{
    naklad=0;
}
 NakladniAuto::~NakladniAuto()
{

}