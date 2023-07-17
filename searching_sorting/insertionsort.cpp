/* INSERTION SORT:- Insert one element from the unsorted array to in the sorted array..

Enter the number of the elements in the array
5
Enter the elements of the array
198
574
389
255
957
The array you entered is :
198     574     389     255     957
The sorting is being done using INSERTION SORT
198     255     389     574     957

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of the elements in the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The array you entered is :\n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<"\nThe sorting is being done using INSERTION SORT"<<endl;
    for(int k=0;k<n;k++)
    {
     int current = array[k];
     int p=k-1;
     while(array[p]>current && p>=0)
     {
        array[p+1]=array[p];
        p--;
     }
     array[p+1]=current;
    }
    for(int h=0;h<n;h++)
    {
        cout<<array[h]<<"\t";
    }
    return 0;

}