// Print Inverted & Rotated half-Pyramid
/*
      *
    * *
  * * *
* * * *

*/
#include<iostream>
using namespace std;

/*
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

//? Second Method


int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=5-i && j<=n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}