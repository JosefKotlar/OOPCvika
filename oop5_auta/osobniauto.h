#pragma once
#include <iostream>
#include "auto.h"
using namespace std;
class OsobniAuto: public Auto
{
private:
    bool okno;
public:
    bool otevriOkno();
    bool nastup();
    void popis();
     OsobniAuto(int hm);
     ~OsobniAuto();     
};
