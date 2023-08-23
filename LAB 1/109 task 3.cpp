#include<iostream>
#include<string.h>
using namespace std;
class Medicine
{

private:
    char name[50];
    char genericName[100];
    double discountPercent,unitPrice;

public:
    void assignName(char n[],char genericn[])
    {
        strcpy(name ,n);
        strcpy(genericName,genericn);
    }
    void assignPrice(double p=0)
    {
        if(p>=0)
        {
            unitPrice=p;
        }
        else
        {
            unitPrice=0;
        }


    }
    void setDiscountPercent(double per=5)
    {
        if(per>=0 && per<=45)
        {
            discountPercent=per;
        }
        else
        {
            discountPercent=5;
        }


    }
    double getSellingPrice(int nos)
    {

        return nos*unitPrice-(nos*unitPrice)*((discountPercent)/100);

    }
    void display()
    {
        cout<<name<<"("<<genericName<<")"<<"has a unit price BDT  "<<unitPrice<<" ."<<"Current discount "<<discountPercent<<"%"<<" ."<<endl;
    }




};


int main()
{
    Medicine m;
    m.assignName("Napa","Paracetamol");
    m.assignPrice(0.80);
    m.setDiscountPercent(10);
    cout<<m.getSellingPrice(5)<<endl;
    m.display();

}
