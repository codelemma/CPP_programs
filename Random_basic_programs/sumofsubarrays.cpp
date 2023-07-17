/* 
SUM OF SUBARRAYS:  Continuous part of the arrays.
Number of sub arrays with n elements = n(n+1)/2
Enter the number of the elements in the array
5
Enter the elements in the array
1 2 0 7 2
The sum of the Subarrays is being done here
The number of possible subarrays: 15
The sum of subarray is: 1
The sum of subarray is: 3
The sum of subarray is: 3
The sum of subarray is: 10
The sum of subarray is: 12
The sum of subarray is: 2
The sum of subarray is: 2
The sum of subarray is: 9
The sum of subarray is: 11
The sum of subarray is: 0
The sum of subarray is: 7
The sum of subarray is: 9
The sum of subarray is: 7
The sum of subarray is: 9
The sum of subarray is: 2
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of the elements in the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The sum of the Subarrays is being done here"<<endl;
    cout<<"The number of possible subarrays: "<<(n*(n+1))/2<<endl;
    for(int i=0;i<=n-1;i++)
    {
        int sum=0;
        for(int j=i;j<=n-1;j++)
        {
            sum=sum + array[j];
            cout<<"The sum of subarray is: "<<sum<<endl;
        }
    }
    return 0;
}