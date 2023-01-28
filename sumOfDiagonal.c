#include<stdio.h>
int main()
{
    int i,j,r,c;
    int A[10][10];

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
    int a=0;

    for(int i=0; i<r;i++)
    {
         a = a + A[i][r - i - 1];
    }


    printf("the sum of diagonal of the matrix is : %d",a);


    return 0;

}
