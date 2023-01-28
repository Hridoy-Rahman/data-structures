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

    for(int i=1; i<n; i++)
    {
        int j;
        int temp=a[i];
        for(j=i-1; j>=0; j--)
        {
            if(a[j]>=temp)
            {
                a[j+1]=a[j];
            }

            else
                {   
                    break;
                }
        }
        a[j+1]=temp;
    }

    printf("After Insertion sort :");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}