#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle (int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    int area(){

        return length*breadth;

    }

    };
int main(){
    Rectangle r (10,5);


    cout<<r.area();

return 0;
}

   /* void setL (int length)
    {
        if (l>0)
        {
            length=length;
        }
        else
        length=1;
    }
    void setB (int breadth)
    {
        if(b>0)
        {
            breadth =breadth;

        }
        else
        breadth =1;

    }*/
    
