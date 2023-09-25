#include "Weight.h"
#include<iostream>
using namespace std;
Weight::Weight():kgToPound(2.20462)
{
    //ctor
}
//conversion constructor
Weight::Weight(double kg):kgToPound(2.20462)
{
  float fracpound=kg*kgToPound;
  pound=static_cast<int>(fracpound);
  ounce=(fracpound-pound)*16;

}

Weight::Weight(int p , float o):pound(p),ounce(o),kgToPound(2.20462)
{

}

Weight::~Weight()
{
    //dtor
}

void Weight::showWeight( )const
{
    cout<<"pound-ounce "<<pound<<"-"<<ounce<<endl;
}

//conversion operator //obj k float->kg
Weight::operator double()const
{
  double fracpound=pound+(ounce/16.0);
  return fracpound/kgToPound;

}
