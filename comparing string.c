#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int n1,n2;
    printf("Enter the string :");
    scanf("%s",a);
    printf("Enter the string :");
    scanf("%s",b);
    n1=strlen(a);
    n2=strlen(b);
    if(n1>n2)
     {
         printf("%s",a);
     }
    else if(n2>n1)
      {
          printf("%s",b);
      }
    else
    {
      printf("%s",a);
    }
    
}
