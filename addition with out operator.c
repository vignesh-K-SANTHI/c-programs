#include<stdio.h>
int main()
{
    int a=5,b=6,c;
  while(b!=0)
  {
      c=a&b;
      a=a^b;
      b=c<<1;
      printf("a=%d,b=%d,c=%d\n",a,b,c);
  }
  printf("%d",a);
}
