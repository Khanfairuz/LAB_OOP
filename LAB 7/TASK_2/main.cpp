#include "Weight.h"
#include<iostream>
using namespace std;

int main()
{
    Weight w1=13.2;//kg to p-o
    w1.showWeight();
    Weight w2(6,2.4);
    double kg=static_cast<double>(w2);
    cout<<"KG :"<<kg<<endl;
    Weight w3(10 ,12);
    cout<<"KG :"<<w3<<endl;
}
