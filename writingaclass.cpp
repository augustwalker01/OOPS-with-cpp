#include<iostream>
using namespace std;

class Shape
{
    public:
    int length;
    int breadth;
};



class Rectangle// if class is a car then objects are bmw , audi;
{
    public:// this is necessary because the class is by default private and not public
    int length ;// these are data
    int breadth;

    int area() //these are functions
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main(){
    Rectangle r1;// now here comes the object
    r1.length=10;
    r1.breadth=5;
    cout<<"the area of rectangle r1 will be "<<r1. area()<<endl;
    Rectangle r2;
    r2.length=15;
    r2.breadth=10;
    cout<<"the perimeter of rectangle r2 will be "<<r2.perimeter()<<endl;
return 0;
}