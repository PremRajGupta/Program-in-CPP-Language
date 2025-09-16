// Write a program in which a function accept parameter and return no value.

#include<iostream>
using namespace std;

void add(int x,int y)
{
    int sum=0;
    sum=x+y;
    cout<<"Sum of Value : "<<sum;
}

int main()
{
    int num1,num2;
    cout<<"Enter First Value: ";
    cin>>num1;
    cout<<"Enter Second Value: ";
    cin>>num2;
    add(num1,num2);
    return 0;
}