#include<stdio.h>
int main()
{
    int i=0,n=0,j=0;

    printf("ENTER THE NUMBER OF CARACTERS IN STRING\n");
    scanf("%d",&n);

    char *str[n+1],*str1[n+1];

    printf("ENTER THE STRING\n");

    for(i=0;i<=n;i++)
    {
        scanf("%c",&str[i]);
    }

   for(i=0,j=n;i<=n,j>=0;i++,j--)
   {
      *(str1+j)=*(str+i);
   }

   printf("REVERSED STRING\n");   }
    for(j=0;j<=n;j++)
    {
     printf("%c",*(str1+j));
    }

}
