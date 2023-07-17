#include<iostream>
#include<math.h>
using namespace std;
int arms(int num);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    arms(n);
    return 0;
}

int arms(int num)
{
    int i=num,r,sum=0;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,3);

        num=num/10;
    }
    if(sum==i)
    {
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstong";
    }
    return 0;
}