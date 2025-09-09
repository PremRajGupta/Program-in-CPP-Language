// Print the largest of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;

    if(a>b && a>c)
        cout<<a<<" is greatest number";
    else if(b>a && b>c)
        cout<<b<<" is greatest number";
    else
        cout<<c<<" is greatest Number";
    
    return 0;
}