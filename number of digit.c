#include <stdio.h>
void main()
{
	int n,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
	    n=n/10;
	    count++;
	}
	    

	printf("The number of digit in the numeric is %d",count);
}
