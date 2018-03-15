#include<stdio.h>
#include<math.h>
void main()
{
    int a,i,count=0,b=1;
    printf("Enter the value for a :");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        b=pow(2,i);
        if(b==a)
        {
        count=1;
        break;
        }
    }
    if(count==1)
    printf("The number %d is power of 2",a);
    else
     printf("The number %d is not power of 2",a);
}
