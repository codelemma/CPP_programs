/* #RHOMBUS PATTERN  
Enter the number of the rows
4
   # # # # 
  # # # #
 # # # #
# # # #
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the number of the rows";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
    return 0;
}