#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the number"<<endl;
    cin>>n;
    if(n%10==0 || n%10==51)
    {
        cout<<"The number is divisible by 5"<<endl;
    }
    else{
        cout<<"The number is not dibvisible by 5"<<endl;
    }
    if(n%11==0)
    {
        cout<<"The number is divisible by 11";
    }
    else{
        cout<<"The number is not divisible by 11";
    }
    return 0;
}