#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int ans=0,i=0,dec=0,n;
     cin>>n;
   while(n!=0)
   {
       int bit=n&1;
       ans= (pow(10,i)*bit)+ans;
       n=n>>1;
       i++;
   } 
   int a=(~ans);
    while(a!=0)
    {
        int b=a%10;
        
        if(b==1)
        {
            dec=(pow(2,i)+dec);
            
        }
            b=b/10;
            i++;

    }

   cout<<ans;
   cout<<a;  
 
    return 0;
}