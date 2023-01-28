#include<iostream>
using namespace std;

bool isEven(int a)
{
    cin>>a;

    if(a&1)
        return 0;

    return 1;
}
int main()
{
    int a;

    if(isEven(a))
    {
        cout<<"Nmber is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
} 

