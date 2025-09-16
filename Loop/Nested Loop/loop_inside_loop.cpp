/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

*/

// #Loop inside a loop
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}