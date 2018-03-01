#include<stdio.h>
void main()
{
  int i,a=0,b=1,c=0,n;
  printf("Enter the number :");
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     c=a+b;
     printf("%d \n",c);
     b=a;
     a=c;
    }
}
