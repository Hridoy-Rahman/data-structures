#include<iostream>
#include<math.h>
using namespace std;
int bits(int a)
{
    int i=0;
    int ans=0,count=0;
    while(a!=0)
    {
        int bit=a&1;
        if(bit==1)
            count++;   
        a=a>>1;
    }
    return count;
}
int Bits(int b)
{
    int i=0;
    int ans=0,count=0;
    while(b!=0)
    {
        int bit=b&1;
        if(bit==1)
            count++;   
        b=b>>1;
    }
    return count;
}

int main()
{
    int x,y,ans;
    cin>>x>>y;

    ans=bits(x)+Bits(y);

     cout<<"The no of bits of A  :"<<bits(x)<<endl;
      cout<<"The no of bits of B :"<<Bits(y)<<endl;

    cout<<"The no of bits :"<<ans<<endl;

    return 0;

}