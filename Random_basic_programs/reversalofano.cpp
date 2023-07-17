#include<iostream>
using namespace std;
int main()
{
    int n,t,r=0;
    cout<<"Enter the number";
    cin>>n;
    t=n;
    while(n>0)
    {
        int lastdigit=n%10;
        r=r*10+lastdigit;
        n=n/10;
    }
    cout<<r<<endl;
    return 0;
}