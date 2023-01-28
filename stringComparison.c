#include <stdio.h>    
int main()  
{  
   char str1[20];  
   char str2[20]; 
   int i=0;

   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  

   while(str1[i]!='\0' && str2[i]!='\0')
   {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not same");
            break;
        }
        else
        
        {
            printf("Strings are same.");
            break;
        }
   }

   
    return 0;  
}  
  