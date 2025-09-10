// Print the sum of odd digits of a number using while loop.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter Digit : ";
    cin>>num;
    while(num!=0){
        int rem=num%10;
        if(rem%2!=0)
            sum+=rem;
        num/=10;
    }
    cout<<"Sum of Digit : "<<sum;
    return 0;
}