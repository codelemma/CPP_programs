/*Enter the number 25
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025
*/
#include<iostream>
void fib(int n);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fib(n);
    return 0;
}
void fib(int n)
{
   int fterm=0;
   int sterm=1;
   int nextterm;
   for(int i=0;i<=n;i++)
   {
    cout<<fterm<<" ";
    nextterm=fterm+sterm;
    fterm=sterm;
    sterm=nextterm;
   }
   return;
}
