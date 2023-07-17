/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
int main()
{
    int slry,yos;//yos stand for years of service
    float bonus,amount;
    cout<<"Enter your year of service"<<endl;
    cin>>yos;
    cout<<"Enter your salary"<<endl;
    cin>>slry;
    if(yos>5)
    {
        cout<<"Hurrah! You will get a bonus this time"<<endl;
        bonus=(0.05)*slry;
        amount=slry+bonus;

        cout<<"Your salary with bonus is:"<<amount<<" This is reward of your consistecy and endurance with our company"<<endl;
    }
    else{
        cout<<"You are not eligible currently for the salary apraisel as per the policies of the company"<<endl;
        int diff= 5-yos;
        cout<<"But you can avail this apraisel if you continue with this company for next:"<<diff<<"  years to come"<<endl;
        cout<<"Hope you are happy working with us"<<endl;
    }
    return 0;

}
