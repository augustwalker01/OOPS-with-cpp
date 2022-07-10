#include<iostream>
using namespace std;

class Base
{
public:
 void fun1()
 {
 cout<<"fun1 of Base "<<endl;
 }
};
//Example 2
class Derived: public Base
{
public:
 void fun2()
 {
 cout<<"fun2 of Derived"<<endl;
 }
};
class Rectangle
{
public:
 void area()
 {
 cout<<"Area of Rectangle"<<endl;
 }
};
class Cuboid: public Rectangle
{
public:
 void volume()
 {
 cout<<"Volume of Cuboid"<<endl;
 }
};
//Example 3 
class BasicCar
{
public:
 void start()
 {
 cout<<"Car started"<<endl;
 }
};
class AdvanceCar: public BasicCar
{
public:
 void playMusic()
 {
 cout<<"Music Playing"<<endl;
 }
};