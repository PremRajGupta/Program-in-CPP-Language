// Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if(num==0)
        cout<<"This Number is Zero";
    else if(num>0)
        cout<<"This Number is Positive Number";
    else
        cout<<"This Number is Negative Number";
}