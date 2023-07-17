#include<iostream>
using namespace std;
int sum(int num1,int num2);
int main()
{
    int n,i,j;
    cout<<"Enter the two numbers"<<endl;
    cin>>i>>j;
    int res=sum(i,j);
    cout<<"Sum of the two numbers is:"<<res<<endl;
}

int sum(int num1,int num2)
{
    int s=num1+num2;
    return s; 
}

