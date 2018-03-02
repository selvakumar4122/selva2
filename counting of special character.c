#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int n=0,i,c=0;
    printf("enter the string :");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
     {
       if((s[i]>=0&&s[i]<=9)||(s[i]>='A'&&s[i]<="z"))
       c++;
       else
       n++;
     }
    printf("The special charactor in sentence : %d",n);
}


