// WAP to input a number and check whether the number is an Armstrong number or not

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,result=0,rem,temp,n=0;
    cout<<"ENter Number : ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp/=10;
        n++;//count
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        // result+= pow(rem,n);
        result+= static_cast<int>(round(pow(rem,n)));//not consider floating number e.g(153)
        temp/=10;
    }
    if(result==num)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
    
    return 0;

}