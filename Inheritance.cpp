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
d.x=12;
d.display();
return 0;
}