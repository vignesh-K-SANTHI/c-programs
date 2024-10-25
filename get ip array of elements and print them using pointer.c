
#include<stdio.h>
int main()
{
    int n=0,i=0;;
    printf("ENTER THE NUMBER OF ELEMENTS;\n");
    scanf("%d",&n);
    int *ar[n+1];

    for(i=0;i<=n;i++)
    {
        scanf("%d",(ar+i));
    }

    for(i=0;i<=n;i++)
    {
        printf("%d",*(ar+i));
    }


}
