// For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<iostream>
using namespace std;

int main()
{
    int num,num1,rem,result=0;
    cout<<"Enter number : ";
    cin>>num;
    num1=num;
    while(num1!=0)
    {
        rem = num1%10;
        result += rem*rem*rem;
        num1/=10;
    }
    if(result == num)
        cout<<"This is Armstrong Number";
    else
        cout<<"This is not Armstrong Number";

    return 0;
}