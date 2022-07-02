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
length=1;
    }
    void setBreadth(int b)
    {
        if (b>0){
            breadth =b;
        }
        else
        breadth=1;
    }

    int area(){
        return length*breadth;
    }
    int perimeter();
};


int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(4);
cout<<r.area();
return 0;
}