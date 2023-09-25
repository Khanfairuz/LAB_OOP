#include <iostream>
#include "CurrencyBDT.h"
#include "CurrencyEURO.h"
#include "CurrencyDOLLAR.h"
using namespace std;

int main()
{
    //bdt euro
    CurrencyBDT bdt(1000,5.4);
    CurrencyDOLLAR d;
    d=static_cast<CurrencyDOLLAR>(bdt);
    d.showCurrencyDollar();
    bdt.showBDT();
    CurrencyEURO e;
    e=bdt;
    e.showCurrencyEURO();
    bdt.showBDT();
}
