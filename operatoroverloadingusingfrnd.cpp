#include<iostream>
using namespace std;
class Complex
{
   private:
    int imag;
    int real;
   public:
   Complex (int r=0,int i=0)
   {
real=r;
imag=i;
   }
   void display()
{
cout<< real <<"i"<< imag<<endl;
}
friend Complex operator +(complex c1,complex c2);
};
Complex operator +(complex c1,complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.imag=c1.imag+c2.imag;
    return t;
}

int main(){
    Complex c1(4,6),c2(5,7),c3;
    c3=c1+c2;
    c3.display();


return 0;
}