#include<iostream>
using namespace std;

struct D
{
  // no need tp mention public access specifier , because its a struct and thats what it has different thsn a class.
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