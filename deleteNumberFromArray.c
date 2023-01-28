#include<stdio.h>
int main()
{
    int n,a[1000],duplicate;
    printf("Enter How many number you want to put in the array :");
    scanf("%d",&n);

    printf("Enter the array elements:");
   for(int i=0; i<n; i++)
   {
        scanf("%d",&a[i]);
   }
   printf("Before Delete : ");

   for(int i=0; i<n;i++)
   {
        printf("%d  ",a[i]);
   }
   int pos;
   printf("Position which you want to delete : ");
   scanf("%d",&pos);

   n--;

   for(int i=pos-1;i<n;i++)
        a[i]=a[i+1];
   printf("After delete :");
   for(int i=0; i<n; i++)
   {
        printf("%d ",a[i]);
   }
  return 0;
}