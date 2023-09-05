#include<iostream>
using namespace std;
class Calculator
{
private:
    int value;
public:
    Calculator():value(0)
    {

    }
    Calculator(int val):value(val)
    {

    }
    int getValue()
    {
        return value;
    }
    //
    void setValue(int val)
    {
       value=val;
    }
    void add( int Val )
    {
        value=value+Val;

    }
    void subtract( int Val )
    {

        value=value-Val;
    }
    void multiply( int Val )
    {

        value=value*Val;
    }
    void divideBy( int Val )
    {
        if(Val==0)
        {
            cout<<"Error : divide by 0 is undefined."<<endl;
        }
        else
        {
            value=value/Val;
        }


    }
    void clear()
    {
        value=0;
    }
    void display()
    {

        cout<<"Calculator display: "<<value<<endl;
    }
    ~Calculator()
    {
        cout<<"Calculator object is destroyed."<<endl;
    }

};

int main()
{
    Calculator c;
    c.add(10);
    c.display();
    c.add(7);
    c.display();
    c.multiply(31);
    c.display();
    c.subtract(42);
    c.display();
    c.divideBy(7);
    c.display();
    c.divideBy(0);
    c.display();
    c.add(3);
    c.display();
    c.subtract(1);
    c.display();
}
