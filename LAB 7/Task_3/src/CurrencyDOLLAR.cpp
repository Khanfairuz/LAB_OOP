#include "CurrencyDOLLAR.h"
#include <iostream>
using namespace std;

CurrencyDOLLAR::CurrencyDOLLAR():dollar(0),cents(0.0),BDT_to_USD(0.0091)
{
    //ctor
}
CurrencyDOLLAR::CurrencyDOLLAR(int d , double c):dollar(d),cents(c),BDT_to_USD(0.0091)
{
    //ctor
}

CurrencyDOLLAR::~CurrencyDOLLAR()
{
    //dtor
}

 CurrencyDOLLAR::CurrencyDOLLAR(double taka):BDT_to_USD(0.0091)
{
  double fracdollar=taka*BDT_to_USD;
  dollar=static_cast<int>(fracdollar);
  cents=(fracdollar-dollar)*100;

}
CurrencyDOLLAR::showCurrencyDollar()const
{
    cout<<"DOLLAR :"<<dollar<<"$"<<endl;
    cout<<"CENTS :"<<cents<<endl;
}
