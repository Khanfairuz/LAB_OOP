#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
public:
    float length;
    float width;
public:
    Rectangle(float len=1,float w=1):length(len),width(w)
    {

    }
    void setLength( float len)
    {
        if(len>=1 && len <20)
        {
            length=len;
        }
        else
        {
            cout<<"LENGTH EXCEEDED "<<endl;
        }

    }
    void setWidth(float w)
    {
        if(w>=1 && w<20)
        {
            width=w;
        }
        else
        {
            cout<<"WIDTH EXCEEDED "<<endl;
        }

    }
    void perimeter()
    {
        cout<<"PERIMETER "<<2*(length+width)<<endl;
    }
    void area()
    {
        cout<<"AREA "<<(length*width)<<endl;
    }
    void angleBetweenDIagonal()
    {
        float angle=atan(length,width);
        angle=(angle*180)/(2*3.1416);
        cout<<"ANGLE BETWEEN DIAGONAL AND A LENGTH "<<angle<<" degree"<<endl;
    }
    void diagonal()
    {


        cout<<"DIAGONAL "<<sqrt((length*length)+(width*width))<<endl;

    }
    void show()
    {
        cout<<"LENGTH "<<length<<"WIDTH"<<width<<endl;
    }


};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setWidth(10);
    r.perimeter();
    r.area();
    r.diagonal();
    r.angleBetweenDIagonal();
}
