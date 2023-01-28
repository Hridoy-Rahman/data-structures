#include<iostream>
using namespace std;

void print(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
}
void swapALternate(int a[],int n)
{
     for(int i=0; i<n; i+=2)
    {
       if(i+1<n)
       {
            swap(a[i],a[i+1]);
       }
    }
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    swapALternate(a,n);
    print(a,n);

    return 0;
   
}