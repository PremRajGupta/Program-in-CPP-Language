
// Print Half Pyramid pattern
/*
1
1 2
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;

/*
int main()
{
    int i,j;
    int n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=1 && j<=i)
                cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/

// ? Second Method

int main()
{
    int i,j;
    int n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}