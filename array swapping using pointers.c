#include<stdio.h>
int main()
{
    int n=0,n1=0,n2=0;
    printf("ENTER THE NUMBER OF DIGITS FOR FIRST ARRAYn\n");
    scanf("%d",&n);

     int i=0,j=0,*a[n+1],*a1[n+1],*a2[n+1];
     printf("ENTER THE DIGITS\n");

     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     printf("ENTER THE DIGITS\n");

      for(j=0;j<n;j++)
     {
         scanf("%d",&a1[j]);
     }

    printf("\n");

    for(i=0;i<n;i++)
    {
        *(a2+i)=*(a+i);
    }

    for(i=0;i<n;i++)
    {
        *(a+i)=*(a1+i);
    }
    for(i=0;i<n;i++)
    {
        *(a1+i)=*(a2+i);
    }
   printf("first array");
      for(j=0;j<n;j++)
     {
         printf("%d",*(a+j));
     }
    printf("\n second array");
      for(i=0;i<n;i++)
     {
         printf("%d",*(a1+i));
     }

}

