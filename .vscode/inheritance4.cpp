#include<iostream>
using namespace std;

class Base
{
private: int a;
protected: int b;
public: int c;
 
 void funBase()
 {
 a=10;
 b=5;
 c=15;
 }
};
class Derived:public Base
{
public:
 void funDerived()
 {
 a=10;
 b=5;
 c=15;
 }
};
int main()
{
 Base B;
 B.a=10;
 B.b=5;
 B.c=20;
}