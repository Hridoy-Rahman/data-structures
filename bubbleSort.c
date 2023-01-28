#include<stdio.h>
int main()
{
    int a[1000],n;
    printf("Enter how many number you want to put in the array :");
    scanf("%d",&n);

    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The original array :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("After bubble sort :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}