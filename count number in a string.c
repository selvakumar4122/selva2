#include<stdio.h>
 #include<string.h>
 void main()
    {
    char s[200];
    int n=0,i;
    printf("enter the string :");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>='0'&&s[i]<='9')
       n++;
   }
    printf("The number of nmber in given string is  : %d",n);
    }
    
    
