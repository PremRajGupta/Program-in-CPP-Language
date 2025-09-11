// Write a program to show numbers entered by user except multiples of 10.

#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout<<"Enter Nth Number : ";
        cin>>num;
        if(num%10==0)
            continue;
        cout<<"your entered "<<num<<endl;
    } while (true);
    
}