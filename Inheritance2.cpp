#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void setlength(int l);
    void setbreadth(int b);
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    int area();
    int perimeter();
    bool issquare();
    ~Rectangle();
};
class cuboid:public Rectangle
{
    
    int height;
    public:
    cuboid(int h)
    {height=h;}
    int getheight(){return height;}
    void setheight(int h);
    int volume (){return getlength()*getbreadth()*height;}


};
int main(){
cuboid c(5);
c.setlength(10);
c.setbreadth(3);
cout<<"Volume is "<<c.volume()<<endl;
return 0;

}
 


void Rectangle::setlength(int l)
{
 length=l;
}
void Rectangle::setbreadth(int b)
{
 breadth=b;
}
int Rectangle::area()
{
 return length*breadth;
}
int Rectangle::perimeter()
{
 return 2*(length+breadth);
}
bool Rectangle::issquare()
{
 return length==breadth;
}
Rectangle::~Rectangle()
{
 // cout<<"Rectangle Destroyed";
}