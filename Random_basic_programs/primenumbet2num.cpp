#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter the limits in which the prime numbers are required"<<endl;
    cin>>n;
    cin>>m;
    for(i=n;i<m;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<" ";
        }
    
    }
    return 0;

}