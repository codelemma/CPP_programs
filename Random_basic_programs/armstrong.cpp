#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int r=0,n,sum=0;
    cout<<"Enter the number";
    cin>>n;
    int t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,3);
        n=n/10;
        cout<<r<<" "<<sum<<" "<<n;
    }
    if(sum==t)
    {
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}