//FUNCTION OVERRIDING 
/*• Redefining a function of base class in derived class
• Function overriding is used for achieving runtime polymorphism
• Prototype of a overrides function must be exactly same as base class function*/
// JUST LIKE IN FUNCTION OVERLOADING THE PROTOTYPE MUST REMAIN SAME , and then the new function called inside the child class will be called instead of parent class.

#include<iostream>
using namespace std;



class Base
{
public:
 void fun()
 {
 cout<<"fun of Base"<<endl;
 }
};
class Derived: public Base
{
public:
 void fun()//also cant provide argument here as the prototype should be exactly same
 {
 cout<<"fun of Derived"<<endl;
 }
}; 
int main()
{
Derived d;
d.fun( );
}
