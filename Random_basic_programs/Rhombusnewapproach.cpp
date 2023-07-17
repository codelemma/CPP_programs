/* WAP to draw this pattern(Rhombus)
      *******
     *******
    *******
   *******
  *******
 *******
*******
*/




#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}