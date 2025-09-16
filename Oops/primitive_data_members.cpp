// Write a program using classes with primitive data members.

#include<iostream>
using namespace std;

class student{
    string name;
    int RollNo;
    float marks;

public:
    void input(){
        cout<<"Enter Student Name : ";
        cin>>name;
        cout<<"Enter RollNO : ";
        cin>>RollNo;
        cout<<"Enter Total Marks : ";
        cin>>marks;
    }
    void output()
    {
        cout<<endl;
        cout<<"Your Name is : "<<name<<endl;
        cout<<"Your Roll No is : "<<RollNo<<endl;
        cout<<"Your Marks is : "<<marks<<endl;

    }

};

int main()
{
    student s;
    s.input();
    s.output();
    return 0;
}