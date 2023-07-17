/* WAP to draw this pattern
        1
      2 1 2
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 


# output was like
Enter the number
10
         1
        212
       32123
      4321234
     543212345
    65432123456
   7654321234567
  876543212345678
 98765432123456789
109876543212345678910

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";

        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        for(j=2;j<(i+1);j++)
        {
            cout<<j;
        }
        
        cout<<"\n";
    }
    return 0;
}
