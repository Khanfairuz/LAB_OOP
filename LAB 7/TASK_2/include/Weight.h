#ifndef WEIGHT_H
#define WEIGHT_H

#include "Weight.h"
#include<iostream>
using namespace std;

class Weight
{
    public:
        Weight();
        Weight(double kg);
        Weight(int p , float o);

        ~Weight();


       /* float GetkgToPound() { return kgToPound; }
        void SetkgToPound(float val) { kgToPound = val; }
        int Getpound() { return pound; }
        void Setpound(int val) { pound = val; }
        float Getounce() { return ounce; }
        void Setounce(float val) { ounce = val; } */
        void showWeight( ) const;
        operator double()const;

    protected:

    private:
       double kgToPound;
        int pound;
        double ounce;
};

#endif // WEIGHT_H
