// Write a function to print the FACTORIAL of a number,N.

#include<iostream>
using namespace std;
int fact(int a){
    int num=1;
    for(int i=1;i<=a;i++)
    {
        num*=i;
    }
    return num;
}
int main()
{
    int N;
    cout<<"Enter Number : ";
    cin>>N;
    int result = fact(N);
    cout<<"Factorial = "<<result;
    return 0;
}