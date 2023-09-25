#include "CurrencyBDT.h"
#include <iostream>
#include "CurrencyEURO.h"
#include "CurrencyDOLLAR.h"
using namespace std;
CurrencyBDT::CurrencyBDT():taka(0),poisha(0.0)
{
    //ctor
}
CurrencyBDT::CurrencyBDT(int t , double p):taka(t),poisha(p)
{

}

CurrencyBDT::~CurrencyBDT()
{
    //dtor
}

 CurrencyBDT::operator CurrencyDOLLAR()const
 {
     double fractaka=taka+poisha/100.0;

     return CurrencyDOLLAR(fractaka);


 }

 CurrencyBDT::operator CurrencyEURO()const
 {
     double fractaka=taka+poisha/100.0;

     return CurrencyEURO(fractaka);


 }

 void CurrencyBDT::showBDT() const
 {
     cout<<"TAKA :"<<taka<<endl;
     cout<<"POISHA :"<<poisha<<endl;
 }
