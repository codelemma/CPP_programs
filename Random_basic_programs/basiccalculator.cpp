#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<5){
    char s;
    int op1,op2;
    cout<<"\nEnter the operand"<<endl;
    cin>>op1>>op2;
    cout<<"Enter the sign of the operand"<<endl;
    cin>>s;
    switch (s)
    {
    case '+':
     int sum;
     sum=op1+op2;
     cout<<sum;
     break;
    case '-':
     int diff;
     diff=op1-op2;
     cout<<diff;
     break;
    case '*' :
     int pro;
     pro = op1*op2;
     cout<<pro;
     break;
    case '/':
     int div;
     if(op2==0)
     {
        cout<<"Can't divide by zero";
     }
     else{
        float div;
        div=op1/op2;
     cout<<div; }
     break;
    default :
     cout<<"Invalid sign";
     break;
    }
    i++; 
    }
    return 0;
}