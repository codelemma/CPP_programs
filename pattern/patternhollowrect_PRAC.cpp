//WAP to draw this pattern of hollow rectangle
/*
******
*    *
*    *
*    *
*    *
*    *
******

*/

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int i,j;
    cout<<"Enter the number of rows";
    cin>>n;
    cout<<"Enter the number of columns";
    cin>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((j==1||j==m)||(i==1||i==n))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}