#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
 public:
 Rectangle(int l,int b)
 {
    setLength(l);
    setBreadth(b);
 }
 void setLength(int l)
 {
    length=l;
 }
 void setBreadth(int b)
 {
    breadth=b;
 }
    int area()
    {
        return length*breadth;
    }
int perimeter();

};

int Rectangle :: perimeter()
{
   return 2*(length+breadth);
}
int main()
{
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
    
}

