// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include<iostream>
using namespace std;

int main()
{
    int n=4;
    int num=1,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << num <<" ";
            num++;
        }
        cout<<endl;
    }
}