#ifndef CURRENCYBDT_H
#define CURRENCYBDT_H
#include "CurrencyEURO.h"
#include "CurrencyDOLLAR.h"

#include <iostream>
using namespace std;
//

class CurrencyBDT
{
    public:
        CurrencyBDT();
        CurrencyBDT(int t , double p);
        ~CurrencyBDT();

       /* int Gettaka() { return taka; }
        void Settaka(int val) { taka = val; }
        double Getpoisha() { return poisha; }
        void Setpoisha(double val) { poisha = val; }*/

    operator CurrencyDOLLAR() const;
    operator CurrencyEURO()const;
     void showBDT() const;

    protected:

    private:
        int taka;
        double poisha;
};

#endif // CURRENCYBDT_H
