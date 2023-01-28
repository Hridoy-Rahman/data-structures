#include<stdio.h>
int main()
{
    int n,a[1000];
    printf("How many number you want to put in the array : ");
    scanf("%d",&n);

    
    printf("Enter the array Element:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];

    for(int i=0; i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        min=a[i];
    }

    printf("The largest element Of the array is : %d\n",max);
    printf("The smallest element Of the array is : %d\n",min);

    return 0;

}