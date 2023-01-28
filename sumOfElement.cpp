#include<iostream>
using namespace std;

void sumOfElement(int a[],int n)
{
    
    for(int i=0; i<n; i++)
    {
        int sum;
        sum=sum+a[i];
        cout<<sum;
    }
   
}
int main()
{
    int size;
    
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    sumOfElement(array,size);
    return 0;

}