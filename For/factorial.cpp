// WAP to find the Factorial of a number entered by the user.
#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"Enter Nth Number : ";
    cin>>num;
    for(int i=num;i>=1;i--)
    {
        fact*=i;
    }
    cout<<"Factorial : "<<fact;
    return 0;
}