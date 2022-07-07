#include<iostream>
using namespace std;
class Base
{
    public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }
};
class derived:public Base{
    public:
    int y;
    void display(){
cout<<x<< " "<<y;
    }
        
    
};
int main(){
Base b;
b.x=25;
b.show();
derived d;
d.y=13;
d.x=12;// here , given a new value to x despite of being derived of base class
// if i dont provide x a value here then it will take 0 as default
d.display();
return 0;
}