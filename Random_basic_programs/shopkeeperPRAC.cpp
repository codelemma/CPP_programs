/*A shop will give discount of 10% if the cost of purchased quantity is more than or equal to 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int sp,pn;
    float dis,amount;
    cout<<"THE GENRAL STORE"<<endl;
    cout<<"There is a discount of 10% if you purcahse over Rs.1000"<<endl;
    cout<<"Each piece is of Rs. 100"<<endl;
    while(i<=4){//here the while loop will go by 4 times so that this program can be reexecuted again 
    cout<<"Enter the number of pieces you want"<<endl;
    cin>>pn;
    sp=pn*100;
    if(sp>=1000)
    {
        cout<<"You will avail the Discount"<<endl;
        dis=0.1*sp;
        amount=sp-dis;
        cout<<"So Now you have to pay lesser"<<endl;
        cout<<"Amount without the discount:"<<sp<<endl;
        cout<<"Amount after the discount:"<<amount<<endl;
        cout<<"SO you have saved:"<<dis<<" amount"<<endl;
    }
    else{
        cout<<"You are not eligible for the discount as per the policy"<<endl;
    }
    i++;
    }
    return 0; 
}