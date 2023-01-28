#include<stdio.h>
int main()
{
    int i,j,r,c;
    int A[10][10],B[10][10],sum[10][10];

    //Getting matrix A

    printf("Enter the number of row & coloum of matrix A :");
    scanf("%d %d",&r,&c);

    printf("Enter the elements for matrix A:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }

    //Getting  matrix B
    printf("Enter the number of row & coloum of matrix B:");
    scanf("%d %d",&r,&c);

    printf("Enter the elements for matrix B:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("B[%d][%d] =",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    //Printing matrix A

    printf("A= ");

    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Printing matrix B

    printf("B= ");

    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    //Multiplying matrix A & B

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                sum[i][j] = A[i][j] * B[i][j];
            }
        }


        //printing Multiplication of two matrix 

        printf("A * B =\t");

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
            printf("\t");

        }


    return 0;

}
