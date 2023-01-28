#include <stdio.h>
int main()
{
     int n, a[1000], duplicate;
     printf("Enter How many number you want to put in the array :");
     scanf("%d", &n);

     printf("Enter the array elements:");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &a[i]);
     }
     printf("Before insert : ");

     for (int i = 0; i < n; i++)
     {
          printf("%d  ", a[i]);
     }
     int m, pos;
     printf("\nWhich number you want to insert :");
     scanf("%d", &m);

     printf("Position where you want to insert : ");
     scanf("%d", &pos);

     n++;

     for (int i = n - 1; i > pos; i--)
     {
          a[i] = a[i - 1];
     }

     a[pos - 1] = m;

     printf("After insert :");
     for (int i = 0; i < n; i++)
     {
          printf("%d ", a[i]);
     }

     return 0;
}