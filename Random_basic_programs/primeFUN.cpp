#include<iostream>
#include<math.h>
using namespace std;
bool prime(int num);
int main()
{
    int n;
    bool r=0;
    cout<<"Enter the number";
    cin>>n;
    while(n>1)
    {
        r=prime(n);
        if(r){
        cout<<n<<" ";}
        n=n-1;
    }
    
    return 0;
}
bool prime(int n)
{
    int i;
    for(i=2;i<(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
     return true;
}