#ifndef COORDINATE_H
#define COORDINATE_H

#include<iostream>
using namespace std;

class Coordinate
{
public:
    Coordinate();
    Coordinate(float x, float y);
    ~Coordinate();

    float Getabscissa()
    {
        return abscissa;
    }
    void Setabscissa(float val)
    {
        abscissa = val;
    }
    float Getordinate()
    {
        return ordinate;
    }
    void Setordinate(float val)
    {
        ordinate = val;
    }
    float getDistance(const Coordinate &c)const;
    float getDistance()const;
    void move_x(float val);
    void move_y(float val);
    void move(float val);
    bool operator>(const Coordinate & c)const;
    bool operator>=(const Coordinate & c)const;
    bool operator<(const Coordinate & c)const;
    bool operator<=(const Coordinate & c)const;
    bool operator==(const Coordinate& c)const;
    bool operator!=(const Coordinate& c)const;
    void operator++( );
    void operator++(int );
    void operator--();
    void operator--(int);
    void display() const;

protected:

private:
    float abscissa;
    float ordinate;
};

#endif // COORDINATE_H
