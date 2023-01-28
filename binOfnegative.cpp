#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0,ones=0;
    cout<<"Enter Number :";
    cin>>n;
    cout<<"Decimal = "<<n<<endl;
    while(n!=0)
    {
       int bit=n&1;
       
       ans=(bit*pow(10,i))+ans;
       
       n=n>>1;
       i++;
    }
    
    if(n<0){
        // if number is negative
        
        n = n*(-1);
        int ans = decimalToBinary(n);
        
        
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    
    
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    } else {
       
        // if number is positive 
        
        cout << ans << endl;
    }
    
    cout<<ones<<endl;
    return 0;
}