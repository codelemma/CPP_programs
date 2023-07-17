#include<iostream>
using namespace std;
int primein(int num1,int num2);
int main()
{
    int x,y;
    cout<<"Enter the two numbers";
    cin>>x>>y;
    primein(x,y);
    return 0;
}
int primein(int num1,int num2)
{
    int i,j;
    bool flag=0;
    for(i=num1;i<num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }

        }
        if(flag==0)
         {
             cout<<i<<" ";
         }
         flag=0;
    }
    return 0;
}