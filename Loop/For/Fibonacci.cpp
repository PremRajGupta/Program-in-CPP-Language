// For a positive N , WAP that prints the first N Fibonacci numbers. (Assume N >= 2)
#include<iostream>
using namespace std;

int main()
{
    int N,i=1,a=0,b=1,c=0;
    cout<<"Enter number : ";
    cin>>N;
    while(i<=N)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}