#ifndef CURRENCYEURO_H
#define CURRENCYEURO_H
#include <iostream>
using namespace std;

class CurrencyEURO
{
    public:
        CurrencyEURO();
        CurrencyEURO(int e , double c);
        CurrencyEURO(double taka);
        ~CurrencyEURO();

        /*int Geteuro() { return euro; }
        void Seteuro(int val) { euro = val; }
        double Getcents() { return cents; }
        void Setcents(double val) { cents = val; }*/
        showCurrencyEURO()const;

    protected:

    private:
        int euro;
        double cents;
        double BDT_to_EURO;
};

#endif // CURRENCYEURO_H
