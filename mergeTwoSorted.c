#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[200],n,m;

    printf("Enter how many number you want to put in the array A :");
    scanf("%d",&n);

    printf("Enter the element Of array A :");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&m);

    printf("Enter the elements of array B:");

    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int p=n+m;

    for(int i=0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i=0; i<m; i++)
    {
        arr3[i+n]=arr2[i];
    }

    printf("Merged array :");
    for(int i=0; i<p;i++)
    {
        printf("%d ",arr3[i]);
    }

    for(int i=0; i<p; i++)
    {
        for(int j=0; j<p; j++)
        {
            if(arr3[i] < arr3[j])
            {
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }

    printf("Merged array after sorting :");

    for(int i=0; i<p; i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}