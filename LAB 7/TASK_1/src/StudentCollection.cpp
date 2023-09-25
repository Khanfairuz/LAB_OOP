#include "StudentCollection.h"
#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

StudentCollection::StudentCollection()
{
    //ctor
}

StudentCollection::~StudentCollection()
{
    //dtor
}

float& StudentCollection:: operator[](const string & name)
{
   for(int i=0;i<size;i++)
   {
     if(name==names[i])
     {
         return grades[i];//lagbe float
     }


   }
    cout<<"NOT FOUND "<<endl;
    exit(1);

}


void  StudentCollection::addStudent(string name , float grade)
{

    if(index<0 && index>=size)
    {
        cout<<"NOT POSSIBLE "<<endl;
        exit(1);
    }
    names[index]=name;
    grades[index]=grade;

     index++;

}

/*float& StudentCollection:: operator[](const int &i)
{
    if(i<0 && i>=size)
    {
       cout<<"NOT FOUND "<<endl;
       exit(1);

    }
    return grades[i];
}



string& StudentCollection:: operator[](const int & i)
{

  if(i<0 && i>=size)
    {
       cout<<"NOT FOUND "<<endl;
       exit(1);

    }
    return names[i];

}*/





