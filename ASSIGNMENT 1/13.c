//MAXIMUM AMONG 2 NUMBERS
#include<stdio.h>
void main()
{
 int a,b,y;
 printf("****PROGRAM TO FIND MAXIMUM AMONG 3 NUMBERS****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter all 3 numbers:");
 scanf("%d%d%d",&a,&b,&y);
 if(a>b && a>y)
 printf("a is the largest number");
 else if(b>a && b>y)
 printf("b is the largest number");
 else
 printf("y is the largest number");
}
