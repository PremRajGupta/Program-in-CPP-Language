// 1 1 1 1
//   2 2 2
//     3 3 
//       4

#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<4-i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}