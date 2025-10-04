// Write a Function to print if a number is prime or not.

#include<iostream>
using namespace std;

void prime(int num)
{
    bool isPrime=true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0)
            isPrime=false;
    }
    if (isPrime == true)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    prime(n);
    return 0;

}