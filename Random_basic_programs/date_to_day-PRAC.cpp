#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int date,mon,yr,y,sum,r;
    cout<<"Enter the Date"<<endl;
    cin>>date;
    if(date>31)
    {
        cout<<"Invalid date Entered";
        return 0;
    }
    cout<<"Enter the Month (month number)"<<endl;
    cin>>mon;
    cout<<"Enter the Year // Year can be in between (1600-2099)"<<endl;
    cin>>yr;
    y=yr%100;
    cout<<y<<"\n";
    r=y/4;
    cout<<r<<"\n";
    sum = y+r+date;
    cout<<sum<<"\n";
    if(1600<=yr && yr<=1699)
    {
        sum=sum+6;
    }
    else if(1700<=yr && yr<=1799)
    {
        sum=sum+4;
    }
    else if(1800<=yr && yr<=1899)
    {
        sum=sum+2;
    }
    else if(1900<=yr && yr<=1999)
    {
        sum=sum+0;
    }
    else if(2000<=yr && yr<=2099)
    {
        sum=sum+6;
    }
    cout<<sum<<"\n";
    if(mon==1 || mon==10)
    {
        sum=sum+0;
    }
    else if(mon==2 || mon==3|| mon==11)
    {
        sum=sum+3;
    }
    else if(mon==4 || mon==7)
    {
        sum=sum+6;
    }
    else if(mon==5)
    {
        sum=sum+1;
    }
    else if(mon==6)
    {
        sum=sum+4;
    }
    else if(mon==8)
    {
        sum=sum+2;
    }
    else if(mon==9 || mon==12)
    {
        sum=sum+5;
    }
    cout<<sum<<"\n";
    r=sum%7;
    r= floor(r);
    cout<<r<<"\n";
    if(r==0)
    {
        cout<<"Sunday";
    }
    else if(r==1)
    {
        cout<<"Monday";
    }
    else if(r==2)
    {
        cout<<"Tuesday";
    }
    else if(r==3)
    {
        cout<<"Wednesday";
    }
    else if(r==4)
    {
        cout<<"Thursday";
    }
    else if(r==5)
    {
        cout<<"Friday";
    }
    else if(r==6)
    {
        cout<<"Saturday";
    }
    return 0;
}
