#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int roll_no;
    int phone_no;
    string address;
};
int main(){
Student sam,John;
sam.roll_no=21;
sam.phone_no=88888888;
sam.address="mumbai";
John.roll_no=22;
John.phone_no=89284928;
John.address="Delhi";
cout<<"the addresses of john and sam are respectively are"<<John.address<<"and "<<sam.address<<"RESPECTIVELY";

return 0;
}