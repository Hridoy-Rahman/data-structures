#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i=0,count=0,j;

    printf("Enter a string :");
    scanf("%s",a);

    for(int i=0; a[i]!='\0'; i++)
    {
        count++;
    }

    for(i=count-1,j=0; i>=0; j++,i--)
    {
        b[j]=a[i];
    }
        b[j]='\0';

    printf("%s",b);

}