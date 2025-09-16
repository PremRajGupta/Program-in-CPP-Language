/*
 *
 * *
 * * *
 * * * *
*/

// Stat Pattern
#include<iostream>
using namespace std;

/*

int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
    
    */

// ?Second Method

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=1 && j<=i)
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}