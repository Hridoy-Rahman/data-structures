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

   printf("The Duplicate element in the array :\n");

   for(int i=0; i<n; i++)
   {
       for(int j=i+1; j<n; j++)
       {
            if(a[i]==a[j])
            {
                 printf("%d\n",a[j]);
            }
            
        }
   }
  

}