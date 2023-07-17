#include<iostream>
using namespace std;
int main()
{
    int arr[20],j,k,n;
    bool flag=0;
    cout<<"Enter the number of data elements"<<endl;
    cin>>n;
    cout<<"Enter the data in the array"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"Enter the element to search";
    cin>>k;
    for(j=0;j<n;j++)
    {
        if(arr[j]==k)
        {
            cout<<j<<endl;
            flag=1;
        }  
    }
    if(flag==0)
    {
        cout<<"The element is not present in the array"<<endl;
    }
    return 0;
}
