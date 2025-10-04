// Write a function to find the product of 2 numbers- a & b;

#include<iostream>
using namespace std;

int pro(int a,int b){
    int prod;
    prod=a*b;
    return prod;
}

int main()
{
    int result= pro(2,3);
    cout<<"Product of Number : "<<result;
    return 0;
}