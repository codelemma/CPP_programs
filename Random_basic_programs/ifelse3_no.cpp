#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a;
        }
        else if(c>a)
        {
            cout<<c;
        }
    }
    else if(a<b)
    {
        if(b>c)
        {
            cout<<b;
        }
        else if(c>b)
        {
            cout<<c;
        }
    }
    else if(a==b)
    {
        if(b>c)
        {
            cout<<a <<b;
            cout<<"\nBoth have equal values";
        }
        else if(b<c)
        {
            cout<<c;
        }
        else if(b==c)
        {
            cout<<"All the three values are same";
        }
    }
    return 0;
}