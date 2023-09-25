#include "Coordinate.h"



#include <iostream>
#include <math.h>
#include<stdlib.h>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate():abscissa(0.0),ordinate(0.0)
{
    //ctor
}
Coordinate::Coordinate(float x, float y):abscissa(x),ordinate(y)
{

}

Coordinate::~Coordinate()
{
    //dtor
}

float  Coordinate:: getDistance(const Coordinate &c)const
{
    float dis=(c.abscissa-abscissa)*(c.abscissa-abscissa)+(c.ordinate-ordinate)*(c.ordinate-ordinate);
    dis=sqrt(dis);
    return dis;

}

float Coordinate::getDistance()const
{
    float dis=(abscissa)*(abscissa)+(ordinate)*(ordinate);
    dis=sqrt(dis);
    return dis;

}

void Coordinate::move_x(float x)
{

    abscissa=abscissa+x;

}
void Coordinate::move_y(float y)
{

    ordinate=ordinate+y;

}
void Coordinate::move(float val)
{
    move_x(val);
    move_y(val);

}

bool Coordinate:: operator>(const Coordinate & c)const
{
    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1>f2)
    {
        return true;
    }
    return false;

}

bool Coordinate:: operator>=(const Coordinate & c)const
{
    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1>=f2)
    {
        return true;
    }
    return false;


}


bool Coordinate::operator<(const Coordinate & c)const
{
    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1<f2)
    {
        return true;
    }
    return false;
}



bool Coordinate::operator<=(const Coordinate & c)const
{
    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1<=f2)
    {
        return true;
    }
    return false;

}
bool Coordinate::operator==(const Coordinate& c)const
{

    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1==f2)
    {
        return true;
    }
    return false;

}


bool Coordinate::operator!=(const Coordinate& c)const
{
    float f1=getDistance();//nijer distance
    float f2=c.getDistance();//origin er shapekhe
    if(f1!=f2)
    {
        return true;
    }
    return false;

}

void Coordinate::operator++( )
{
    ++abscissa;
    ++ordinate;

}

void Coordinate::operator++(int)
{
    abscissa++;
    ordinate++;

}

void Coordinate::operator--( )
{
    --abscissa;
    --ordinate;

}

void Coordinate::operator--(int)
{
    abscissa--;
    ordinate--;

}
void Coordinate::display()const
{
   cout<<"ABSCISSA :"<<abscissa<<endl;
   cout<<"ORDINATE :"<<ordinate<<endl;

}
