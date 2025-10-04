// Write a function to print if a number is odd or even.

#include<iostream>
using namespace std;

bool EvenOdd(int a){
    if(a%2==0)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cout<<"Enter nUmber : ";
    cin>>num;
    int result = EvenOdd(num);
    cout<<result;

    return 0;
}