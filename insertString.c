
#include <stdio.h>
#include <string.h>
int main()
{
        char a[10];
        char b[10];
        char c[10];
        int p=0,r=0,i=0;
        int t=0;
        int x,g,s,n,o;
        //clrscr();
        puts("Enter First String:");
        gets(a);

        puts("Enter Second String:");
        gets(b);

        printf("Enter the position where the item has to be inserted: ");
        scanf("%d",&p);

       for(int i=0; a[i]!='\0'; i++)
            {
                r++;
            }
        for(int i=0; a[i]!='\0'; i++)
            {
                n++;
            }


        while(i <= r)
        {
            c[i]=a[i];
            i++;
        }
        s = n+r;
        o = p+n;

        // Adding the sub-string
        for(i=p;i<s;i++)
        {
            x = c[i];
            if(t<n)
            {
                a[i] = b[t];
                t=t+1;
            }
            a[o]=x;
            o=o+1;
        }

        printf("%s", a);
        return 0;
        }