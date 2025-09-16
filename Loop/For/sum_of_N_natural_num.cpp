// Sum of N natural number.

#include<iostream>
using namespace std;
int main(){
    int N,sum=0,i;
    cout<<"Enter Number : ";
    cin>>N;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    cout<<"Sum of total number="<<sum;
    return 0;
}