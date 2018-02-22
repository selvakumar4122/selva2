 #include<stdio.h>
 #include<string.h>
 void main()
    {
    char s[20];
    int n=1,i;
    printf("enter the string :");
    scanf("%[\n]s",s);
    for(i=0;i<20;i++)
   {
       if(s[i]!='\t'||s[i]!='\0')
    n++;
   }
    printf("The numbers in sentence : %d",n);
    }
