#include<iostream>
using namespace std;
int main()
{
    int n,p=1,s=0;
    cin>>n;
    while(n!=0)
    {
        int rem=n%10;
        p=p*rem;
        s=s+rem;
        n=n/10;

    }
    int sub=p-s;

    cout<<sub<<endl;
    return 0;
}