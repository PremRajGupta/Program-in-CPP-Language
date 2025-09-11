// WAP where user can keep entering numbers till today enter a multiple of 10.

#include<iostream>
using namespace std;
int main()
{
    int num;
    do{
        cout<<"Enter number : ";
        cin>>num;
        if(num%10==0){
            break;
        }
        cout<<"your entered " << num <<endl;
        
    }while(true);
}