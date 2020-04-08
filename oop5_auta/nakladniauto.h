#pragma once
#include <iostream>
#include "auto.h"
using namespace std;
class NakladniAuto: public Auto
{
private:
    int naklad;
public:
    bool nastup(); //max. 2 pasazeri
    bool naloz(int na); //+ 300 kg nakladu
    int vratVahu();
    void popis();
     NakladniAuto(int hm);
     ~NakladniAuto();     
};
