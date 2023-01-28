#include<stdio.h>
int main()
{
    int n,a[1000],sum=0;
    printf("Enter How many number you want to put in the array :");
    scanf("%d",&n);

    printf("Enter the array elements:");
   for(int i=0; i<n; i++)
   {
        scanf("%d",&a[i]);
   }

   for(int i=0; i<n; i++)
   {
        sum+=a[i];
   }
   printf("Sum of the array is : %d",sum);

   return 0;

}