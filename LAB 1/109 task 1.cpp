#include<iostream>
using namespace std;

class Counter
{
private:
    int incriment_step ,count;
public:

    void setIncrimentStep(int step_val)
    {
        incriment_step=step_val;

    }
    int getCount()
    {
        return count;
    }
    void incriment()
    {
        count=count+incriment_step;
    }
    void resetCount()
    {
        count=0;
    }


};

int main()
{
    Counter c;
      c.resetCount();
    c.setIncrimentStep(2);
    c.incriment();
     c.setIncrimentStep(4);
     c.incriment();
     cout<<c.getCount();

}
