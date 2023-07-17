#include<iostream>
int fact(int num);
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    fact(x);
    return 0;
}
int fact(int num)
{
    int i,j,f=1;
    if(num>0){
    for(i=1;i<=num;i++){
     f=i*f;
    }
    }
    else{
        cout<<"The factorial of the number is:0";
    }
    cout<<"The factorial of the number is:"<<f<<endl;
    return 0;
}