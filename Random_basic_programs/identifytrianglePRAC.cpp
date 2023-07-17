// This program is of getting to know about the triangle through it's given sides
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter the three sides of the triangle"<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2|| side1==side3)
    {
        if(side2==side3)
        {
            cout<<"Equilateral Triangle";
        }
        else
        {
            cout<<"Isosceles Triangle";
        }
    }
    else if(side1!=side2 && side1!=side3)
    {
        if(side1+side2==side3 || side1+side3==side2 || side2+side3==side1)
        {
            cout<<"This is not a triangle"<<" This forms a straight line"<<endl;
        }
        else
        cout<<"Scalane triangle";
    }
    
    return 0;
}
