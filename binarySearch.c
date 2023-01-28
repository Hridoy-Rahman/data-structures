#include<stdio.h>

void getdata(int arr[],int n)

{

    printf("Enter the array element in increasing order : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
}
int binarySearch(int arr[],int size,int element)
{
   int mid,low=0;
   int high=size-1;
   
    while(low<=high)
    {
    mid=(low+high)/2;

    if(arr[mid]==element)
    {
        return mid;
    }

    else if(arr[mid]<element)
    {
        low=mid+1;
    }

    else
    {
        high=mid-1;
    }
    }
    return -1;
}


int main()
{
      int arr[1000], n,element;

   printf("Enter how many number you want to put in the array :");
   scanf("%d",&n);

    getdata(arr,n);

    printf("Enter the value that you want to search :");
    scanf("%d",&element);
    
    int searchIndex=binarySearch(arr,n,element);
   printf("The value %d is in %dth position.",element,searchIndex+1);


}
