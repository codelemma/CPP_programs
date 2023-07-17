//Take 10 integers from keyboard using loop and print their average value on the screen.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    float avg,sum;
    cout<<"Enter the number of students (Less than 20)"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers to calculate their average";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
       sum = sum + arr[j];
    }
    cout<<"The average of these numbers is:"<<sum/n<<" ";
    return 0;
}