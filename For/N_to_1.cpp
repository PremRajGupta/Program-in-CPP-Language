// Print numbers from N to 1 using to loop.

#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter Number : ";
    cin>>num;
    for(i=num;i>=1;i--){
        cout<<i<<" ";
    }
    return 0;
}