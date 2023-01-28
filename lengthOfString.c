#include<stdio.h>
int main()
{
    char a[]="jhsdgfjkysdrjkfjkgjsetfusg";
    int count=0,i=0;
    printf("The string is : ");
    puts(a);
    for(int i=0; a[i]!='\0'; i++)
    {
        count++;
    }

    printf("\nThe length of the string is : %d",count);

}
