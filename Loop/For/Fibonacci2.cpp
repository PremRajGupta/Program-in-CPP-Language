//  For a positive N , WAP that prints the first N Fibonacci numbers. (Assume N >= 2)
// Second Method

#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int first=0,sec=1,third=0;
    cout<<first<< " "<<sec<< " ";

    for(int i=2;i<n;i++)
    {
        third=first+sec;
        cout<<third<<" ";
        first=sec;
        sec=third;
    }

    return 0;
}