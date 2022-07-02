#include<iostream>
using namespace std;

class D
{
    public:
    int x,y;
    void display(){
        cout<<x<<" "<<y;
    }
};
int main(){
D d1;
d1.x=1;
d1.y=2;
d1.display();


return 0;
}