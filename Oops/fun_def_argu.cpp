// Write a program using functions with default arguments.

#include<iostream>
using namespace std;

void add(int x, int y=10)
{
    int sum=0;
    sum=x+y;
    cout<<"Sum of Value : "<<sum;
}

int main()
{
    int num1=5;
    add(num1);
    return 0;
}