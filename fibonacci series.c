#include<stdio.h>
void main()
{
  int i,a=0,b=1,c=0,n;
  printf("Enter the number :");
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("%d \n",c);
     c=a+b;
     b=a;
     a=c;
    }
}
