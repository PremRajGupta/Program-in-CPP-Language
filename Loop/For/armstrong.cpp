// WAP to input a number and check whether the number is an Armstrong number or not.

#include<iostream>
using namespace std;

int main()
{
    int n,temp,result=0;
    cout<<"Enter Number for Armstrong : ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        int rem=temp%10;
        result+=rem*rem*rem;
        temp/=10;
    }
    if(result==n)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
    
    return 0;
}