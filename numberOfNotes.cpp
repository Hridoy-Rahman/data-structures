#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    switch(1)
    {
        case 1:
        
            a=n/100;
            n=n%100;
            cout<<"Number Of 100 Taka note : "<<a<<endl;
       case 2:
            b=n/50;
            n=n%50;
            cout<<"Number Of 50 Taka note : "<<b<<endl; 
       case 3:
            c=n/20;
            n=n%20;
            cout<<"Number Of 20 Taka note : "<<c<<endl;  
        case 4:
            d=n/1;
            n=n%1;
            cout<<"Number Of 1 Taka note : "<<d<<endl;   
    }

    return 0;

}