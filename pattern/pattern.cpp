// program for the half pyramid  
 #include<iostream>
 using namespace std;
 int main()
 {
     int i,j,k,n;
     cout<<"Enter the number of rows required";
     cin>>n;
     for(i=1;i<=n;i++)
     { 
        for(j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<endl;
     }
     return 0;
 }