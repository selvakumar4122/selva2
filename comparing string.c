#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int n1=0,n2=0,i,j,c=0;
    printf("Enter the string :");
    scanf("%s",&a[20]);
    printf("Enter the string :");
    scanf("%s",&b[20]);
    n1=strlen(a[20]);
    n2=strlen(b[20]);
    for(i=0;i<n1;i++)
    for(j=0;j<n2;j++)
      if(a[i]==b[j])
      
      {
        c++;  
      } 
    if(c==n1)
    printf("%s",a);
    else
    printf("%d%d",a,b);
}
