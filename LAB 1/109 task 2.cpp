#include<iostream>
using namespace std;
class Time
{
    private:
  int hr,min,sec;
  public:
      int hours()
      {
          return hr;
      }
      int minutes()
      {
          return min;
      }
      int seconds()
      {
          return sec;
      }
      void reset(int h ,int m,int s)
      {
        sec=s;
        min=(sec/60)+m;
        sec=sec%60;
        hr=(min/60)+h;
        min=min%60;
        hr=hr%24;

      }
      void advance(int h ,int m,int s)
      {
          sec=(sec+s);
          min=((sec/60)+min+m);
          sec=sec%60;
          hr=(min/60)+hr+h;
          min=min%60;
          hr=hr%24;
      }

       void print()
       {
           cout<<hr<<":"<<min<<":"<<sec<<endl;
       }


};
int main()
{
    Time t;
    t.reset(0,1,65);
   // t.advance(1,20,15);
    t.print();

}
