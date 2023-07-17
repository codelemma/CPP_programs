/*(any number can be entered and its primeness can be checked)
Enter the number33
NOT prime
############################################
Enter the number2
prime
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number";
    cin>>n;
    
    for/*(int i=2;i<n;i++)*/ (int i=2;i<=sqrt(n);i++)/*can be used for less
     time complexity and fast exexution.*/
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count!=0)
    {
        cout<<"NOT prime";
    }
    else 
    {
        cout<<"prime";
    }
    return 0;
}