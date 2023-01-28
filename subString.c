#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100];
    int pos,len,c=0;
    printf("Enter main string:");
    gets(a);
    printf("Enter Position and length :");
    scanf("%d%d",&pos,&len);

    while (c < len) {
      b[c] = a[pos+c-1];
      c++;
   }
   b[c] = '\0';
 
   printf("Required substring is %s", b);
 
   return 0;

}