// For a positive N , WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,flag=1;
    cout<<"Enter N Number : ";
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<i<<" ";
    }
    return 0;
}