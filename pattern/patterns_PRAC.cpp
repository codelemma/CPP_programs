/*Print the following patterns using loop
*
**
***
****
*****
******
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of lines of the pattern";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}