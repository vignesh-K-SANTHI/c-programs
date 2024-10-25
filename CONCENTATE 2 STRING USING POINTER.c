#include<stdio.h>
int main()
{
    int a=0,b=0,num=0,num1=0;

    char ar[4]="MAN";
    char *ptr;
    ptr=ar;

    char ar1[5]="FREE";
    char*ptr1;
    ptr1=ar1;

    char ar2[10];
    char *ptr2;
    ptr2=ar2;

    for(a=0;a<=2;a++)
    {
        printf("%c",*(ptr+a));
    }

    printf("\n");

    for(a=0;a<=3;a++)
    {
        printf("%c",*(ptr1+a));
    }

                for(num=0;*(ptr+num)!='\0';num++)

                {
                    *(ptr2+num)=*(ptr+num);
                }



                for(num1=0;*(ptr1+num1)!='\0';num1++)

                {
                    *(ptr2+num)=*(ptr1+num1);
                    num++;
                }

                printf("\n");

                for(b=0;b<=6;b++)

                {
                    printf("%c",*(ptr2+b));
                }


}
