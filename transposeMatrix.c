#include<stdio.h>
int main()
{
    int i,j,r,c;
    int A[10][10],t[10][10];

    printf("Enter the number of row & coloum of matrix :");
    scanf("%d %d",&r,&c);

    printf("Enter the elements for matrix A:");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }

    printf("A= ");

     for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf(" %d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            t[j][i]=A[i][j];
        }
    }

    printf("Transpose Of Matrix A :\n");

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d\t",t[i][j]);
        }
      
        printf("\n");
    }


    return 0;

}
