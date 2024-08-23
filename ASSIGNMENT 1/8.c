//STRONG NUMBER OR NOT
#include<stdio.h>
void main()
{
 int no, orig, rem, sum=0, fact,i;
 printf("****PROGRAM TO CHECK IS A NUMBER IS STRONG OR NOT****\n")
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter number:");
 scanf("%d",&no);
 orig=no;
 while(no!=0)
 {
 rem=no%10;
 fact=1;
 for(i=1;i<=rem;i++)
 {
 fact=fact*i;
 }
 sum=sum+fact;
 no=no/10;
 }
 if(sum==orig)
 printf("%d is strong no",orig);
 else
 printf("%d is not strong no",orig);
}
