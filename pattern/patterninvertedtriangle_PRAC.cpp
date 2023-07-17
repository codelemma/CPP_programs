/* WAP to draw this pattern

******
*****
****
***
**
*

*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";

        }
        cout<<"\n";
    }
    return 0;
}