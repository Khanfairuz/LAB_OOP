#ifndef STUDENTCOLLECTION_H
#define STUDENTCOLLECTION_H

#include <iostream>
#include<string.h>
#include<string.h>
using namespace std;

class StudentCollection
{
    public:
        StudentCollection();
        ~StudentCollection();
        float& operator[](const string & name);
        //array te read+ write
        //float& operator[](const int &i);
        //string& operator[](const int & i);//error

        void  addStudent(string name , float grade);
         int getSize();



    protected:

    private:
        enum {size=10};
        string names[size];
        float grades[size];
        int index=0;
};

#endif // STUDENTCOLLECTION_H
