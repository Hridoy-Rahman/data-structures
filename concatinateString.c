#include<stdio.h>
int main()
{
    char a[100]="Hridoy";
    char b[]="Rahman";
   int l=0,j;

   while(a[l]!='\0')
   {
        l++;
   }

   for(j=0; b[j]!='\0'; j++, l++)
   {
        a[l]=b[j];
   }

   a[l]='\0';
  

   printf("After concatenate : ");
   puts(a);

}