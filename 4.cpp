#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

class Shape
{
    public:
        float area, volume;
        virtual void calculateArea(){}
        virtual void calculateVolume(){}
};

class TwoDShape : public Shape
{
    public:
        float x, y;
        virtual void calculateArea(){}
};

class ThreeDShape : public Shape
{
    public:
        float r;
        virtual void calculateArea(){}
        virtual void calculateVolume(){}
};

class Square : public TwoDShape
{
    public:
        Square(float x = 0)
        {
            this -> x = x;
        }
        virtual void calculateArea()
        {
            area = x * x;
            cout << endl << "Area : " << area;
        }
};

class Rectangle : public TwoDShape
{
    public:
        Rectangle(float x = 0, float y = 0)
        {
            this -> x = x;
            this -> y = y;
        }
        virtual void calculateArea()
        {
            area = x * y;
            cout << endl << "Area : " << area;
        }
};

class Sphere : public ThreeDShape
{
    public:
        Sphere(float r = 0)
        {
            this -> r = r;
        }
        virtual void calculateArea()
        {
            area = 4 * PI * pow(r, 2);
            cout << endl << "Area : " << area;
        }
        virtual void calculateVolume()
        {
            volume = (4.0 / 3.0) * PI * pow(r, 3);
            cout << endl << "Volume : " << volume;
        }

};

int main(){
// TwoDShape
    // Sphere
    Square Sq(4);
    cout << endl << "---- Square ----";
    Sq.calculateArea();
    cout << endl;

    // Rectangle
    Rectangle Re(10, 5);
    cout << endl << "---- Rectangle ----";
    Re.calculateArea();
    cout << endl;

// ThreeDShape
    Sphere Sp(10);
    cout << endl << "---- Sphere ----" ;
    Sp.calculateArea();
    Sp.calculateVolume();
    cout << endl;

    return 0;
}
