#include <stdio.h>
void main()
{
  int a[100000],n,i,j,t;
  printf("enter value for n:");
  scanf("%d",&n);
  printf("Enter the value for array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    if(a[i]<a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
}
     printf("The minimum value you enter is %d",a[i]);
     printf("\nThe maximum value you enter is %d",a[0]);
}
