#ifndef CURRENCYDOLLAR_H
#define CURRENCYDOLLAR_H
#include <iostream>
using namespace std;

class CurrencyDOLLAR
{
    public:
        CurrencyDOLLAR();
        CurrencyDOLLAR(int d , double c);
        CurrencyDOLLAR(double taka);
        showCurrencyDollar()const;
        ~CurrencyDOLLAR();

       /* int Getdollar() { return dollar; }
        void Setdollar(int val) { dollar = val; }
        double Getcents() { return cents; }
        void Setcents(double val) { cents = val; } */

    protected:

    private:
        int dollar;
        double cents;
        double BDT_to_USD;
};

#endif // CURRENCYDOLLAR_H
