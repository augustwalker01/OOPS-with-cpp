#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
    if (l>0)
    {
        length=l;
    }
    else
    cout<<"cant be negative";
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else
        cout<<"cant be negative";
    }
    int getLength(int l)
    {
return length;
    }
    int getBreadth(int b)
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()

{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(-3);
cout<<r.area();
return 0;
}
