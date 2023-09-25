#include "StudentCollection.h"
#include <iostream>
#include<string.h>
using namespace std;

//int a[i]
//return korbe int type
// nibe index
//string array read-prob
int main()
{
     StudentCollection st;
     /*operator overloading
     //name store
      st[0]="ab";
      st[1]="bc";
      st[2]="cd";
      st[3]="ef";
      st[4]="gh";
      //mark store
      for(int i=0;i<5;i++)
      {
          st[i]=i+10.0;
      }
      //name diye marks show korbe
      cout<<st["ab"]<<endl;

      //name diye marks k modify korbe
      st["gh"]=0.0;

       //name diye marks show korbe
      cout<<st["ab"]<<endl;

      //name show ->modify
      for(int i=0;i<5;i++)
      {
          //cout<<st[i]-???
          string y=st[i];
          cout<<y<<endl;

      }

      //marks show
      for(int i=0;i<5;i++)
      {
          cout<<st[i]<<endl;
      }
      */
    StudentCollection s1;
    s1.addStudent("A", 80.0);
    s1.addStudent("B", 50.1);
    s1.addStudent("C", 99);

   cout<< s1["A"]<<endl;//grade return

    s1["B"]=90;//assign

    cout<<s1["B"];

    return 0;

}
