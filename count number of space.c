 #include<stdio.h>
 #include<string.h>
 void main()
    {
    char s[20];
    int n=0,i;
    printf("enter the string :");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       n++;
   }
    printf("The space in sendence : %d",n);
    }
