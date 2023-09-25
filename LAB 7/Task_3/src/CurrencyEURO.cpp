#include "CurrencyEURO.h"
#include <iostream>
using namespace std;

CurrencyEURO::CurrencyEURO():euro(0),cents(0.0),BDT_to_EURO(0.0085)
{
    //ctor
}
CurrencyEURO::CurrencyEURO(int e , double c):euro(e),cents(c),BDT_to_EURO(0.0085)
{
    //ctor
}
CurrencyEURO::CurrencyEURO(double taka):BDT_to_EURO(0.0085)
{
    double fraceuro=taka*BDT_to_EURO;
  euro=static_cast<int>(fraceuro);
  cents=(fraceuro-euro)*100;


}

CurrencyEURO::~CurrencyEURO()
{
    //dtor
}

CurrencyEURO::showCurrencyEURO()const
{
    cout<<"EURO :"<<euro<<"$"<<endl;
    cout<<"CENTS :"<<cents<<endl;
}
