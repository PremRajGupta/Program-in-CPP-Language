#include<iostream>
using namespace std;

/*
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        // space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(j>=5-i && j<=4)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}