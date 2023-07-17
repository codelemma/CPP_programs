/* WAP to draw this pattern
    *
   ***   
  *****   
 *******  
********* 

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cout<<"Enter base of the triangle(put an odd number)"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { 
            if(j>=((n/2)-i) && j<=((n/2)+i))
            {
                cout<<"*";
                count++;
            }
            else{
                cout<<" ";
            }

        }
        if(count==((n/2)+1)*((n/2)+1))
        {
            break;
        }
        cout<<"\n";
    }
    return 0;
}