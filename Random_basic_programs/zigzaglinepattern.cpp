/* Zigzag pattern of line (no of star you enter you will get that much stars in the pattern)
Enter the number of rows
9
    *       *     
  *   *   *   *
*       *       *
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows";
    cin>>n;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(((i+j)%4==0)|| (i==2 && j%4==0))
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        } 
        

    return 0;
}