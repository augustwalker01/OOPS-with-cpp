#include<iostream>
#include <string.h>

using namespace std;
class Student
{
    int roll;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
    Student(int r,string n,int m1,int m2,int m3)
    {
        roll=r;
        name=n;
        marks1=m1;
        marks2=m2;
        marks2=m3;
    }
    int TOTAL(){
        return marks1+marks2+marks3;
    }
    char grade(){
        float average= TOTAL()/3;
        if(average>=60)
        return 'A';
        
        if( average<60)
        return 'C';
    }
};
    



int main(){
    int roll;
    string name;
    int m1,m2,m3;
    cout<<"enter the roll number:";
    cin>>roll;
    cout<<"enter name of student:";
    cin >>name;
    cout<<"enter marks of 3 subjects";
    cin>>m1>>m2>>m3;
    Student s(roll,name,m1,m2,m3) ;
    cout<<"total MARKS"<<s.TOTAL()<<endl;
    cout<<"grade"<<s.grade()<<endl;

return 0;
}