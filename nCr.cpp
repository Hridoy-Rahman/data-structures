#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    cin>>n>>r;
    int a=factorial(n);
    int b= factorial(r)*factorial(n-r);

    return a/b;
}

int main()
{
    int x,y,answer;
    answer=nCr(x,y);
    cout<<"The answer of nCr is "<<answer<<endl;

    return 0;
}