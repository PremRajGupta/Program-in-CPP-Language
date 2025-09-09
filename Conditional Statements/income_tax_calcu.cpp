// Create an INcome tax Calculate.

#include<iostream>
using namespace std;

int main()
{
    int income;
    float tax;
    cout<<"Enter YOur Income in lack e.g(5,1,7) : " ;
    cin>>income;
    
    if(income<5)
    {
        tax = 0;
    }
    else if(income<=10)
    {
        tax = 0.2*income;
    }
    else
        tax = 0.3*income;
    
    cout<<"Total Tax : " << (tax*100000);

    return 0;
}