// WAP to draw this pattern
/*
*
* *
* * *
* * * *
* * * * *
*/


#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(j<i)
           {
            cout<<"*"<<" ";}
          else{
                cout<<" ";
            }
         if(j==(n/2))
            {
                m=2*n-i+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}