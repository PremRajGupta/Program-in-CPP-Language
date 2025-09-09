// Print the largest of 2 numbers.

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter Two number : ";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<"Largest Number is : " << num1;
    else
        cout<<"Largest Number is : "<<num2;
}