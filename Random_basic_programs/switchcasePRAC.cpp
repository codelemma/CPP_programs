//Print multiplication table of 24, 50 and 29 using loop.
/*
Enter the number for which the table is to be printed
45
45 X 1 = 45
45 X 2 = 90
45 X 3 = 135
45 X 4 = 180
45 X 5 = 225
45 X 6 = 270
45 X 7 = 315
45 X 8 = 360
45 X 9 = 405
45 X 10 = 450
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number for which the table is to be printed"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        int res;
        res = n*i;
        cout<<n<<" X "<<i<<" = "<<res<<endl;
    }
    return 0;
}