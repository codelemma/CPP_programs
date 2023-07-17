/* 
BUBBLE SORT :- Repeatedly swap two adjacent elements if they are in wrong order.(wrong left>right)

Enter the number of elements in the array
5
Enter the elements of array
11
-11
23
-4
0  
Array you entered
11      -11     23      -4      0
Sorting is done using BUBBLE SORT
-11     -4      0       11      23
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Array you entered\n";
    for(int l=0;l<n;l++)
    {
        cout<<array[l]<<"\t";
    }
    cout<<"\nSorting is done using BUBBLE SORT"<<endl;
    for(int i=1;i<=n;i++)
    {
       for(int j=0;j<n-i;j++)
      {
        if(array[j]>array[j+1])
        {
            int temp=array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
        }
      }
    }
    for(int l=0;l<n;l++)
    {
        cout<<array[l]<<"\t";
    }
    return 0;
}