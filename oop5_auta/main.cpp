#include "auto.h"
#include "osobniauto.h"
#include "nakladniauto.h"
#include <vector>
using namespace std;

int main()
{
	vector<Auto*> garaz;	
	//osobni auto: max 4 pasazeri, oteviraci okno
	OsobniAuto* skoda= new OsobniAuto(900);
	skoda->nastup();
	skoda->nastup();
	skoda->nastup();
	skoda->otevriOkno();
	
	//nakladni auto: max 2 pasazeri, muze vezt naklad
	NakladniAuto* nakladak= new NakladniAuto(23000);
	nakladak->naloz(280);
	nakladak->nastup();
	nakladak->nastup();
	nakladak->nastup();
	
	//obecne auto, ma pouze ridice
	Auto* velorex = new Auto(100);
		
	garaz.push_back(skoda);
	garaz.push_back(nakladak);
	garaz.push_back(velorex);
	
	for (int i=0; i<garaz.size(); i++)
	{
		garaz.at(i)->popis();
	}	
}
