
#include <stdio.h>
void main()
{
  int a[100000],t=0,avg;
  int n,i;
  printf("enter value for n:");
  scanf("%d",&n);
  printf("Enter the value for array : ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      t=t+a[i];
  }
  avg=t/n;
  printf("The average is %d",avg);
}
