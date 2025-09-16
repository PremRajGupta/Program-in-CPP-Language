// A
// B A
// C B A
// D C B A

#include<iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for(int i=0;i<4;i++){
        for(int j=i+1;j>0;j--){
            cout<<(char)(ch+j-1)<<" ";
        }
        cout<<endl;
    }
}