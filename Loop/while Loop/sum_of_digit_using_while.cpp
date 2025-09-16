// Print the Sum of Digits of a number using while loop.

#include<iostream>
using namespace std;
int main()
{
    int num,result=0;
    cout<<"Enter Digit : ";
    cin>>num;
    while(num!=0){
        result+=num%10;
        num=num/10;
    }
    cout<<"Sum of Digit = "<<result;
    return 0;
}