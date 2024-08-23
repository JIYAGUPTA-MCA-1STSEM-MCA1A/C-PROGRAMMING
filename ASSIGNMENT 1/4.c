//PRIME NUMBERS FROM 1 TO N
#include<stdio.h>
void main()
{
 int n,i,fact,j;
 printf("****PROGRAM TO GENERATE PRIME NUMBERS FROM 1 TO N****\n)");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter the number");
 scanf("%d",&n);
 printf("Prime numbers are:\n");
 for(i=1;i<=n;i++)
 {
 fact=0;
 for(j=1;j<=n;j++)
 {
 if(i%j==0)
 fact++;
 }
 if(fact==2)
 printf("%d",i);
 }
}
