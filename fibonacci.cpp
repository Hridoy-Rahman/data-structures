#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n)
{
    int fibo1=0;
    int fibo2=1;
     
     int fibo3;
     for(int i=0; i<n-2; i++)
     {
        fibo3=fibo1+fibo2;
        
        fibo1=fibo2;
        fibo2=fibo3;

        
     }
     
}

int main()
{
    int a;
    cin>>a;
    cout<<"The "<<a<<"th fibonacci number is : "<<fibonacci(a)<<endl;

    return 0;
}