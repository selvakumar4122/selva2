#include <stdio.h>
#include<string.h>
void main()
{
	int n,i,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	if(i==n)
	{
	    count=1;
	    break;
	}
	if(count==1)
	printf("The number is in the range");
	else
	printf("The number is not in the range");
}
