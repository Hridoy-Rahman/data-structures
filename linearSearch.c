#include<stdio.h>>

void getdata(int arr[],int n)

{

    printf("Enter the array element : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
}
int linearSearch(int arr[],int size,int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element)
            return i;
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
    
    int searchIndex=linearSearch(arr,n,element);
   printf("The value %d is in %dth position.",element,searchIndex+1);


}
