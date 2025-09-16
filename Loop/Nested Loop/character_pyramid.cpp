// Print Character Pyramid pattern.
/*
A
B C 
D E F
G H I J
*/
#include<iostream>
using namespace std;

int main()
{
    int i,j,n=4;
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}