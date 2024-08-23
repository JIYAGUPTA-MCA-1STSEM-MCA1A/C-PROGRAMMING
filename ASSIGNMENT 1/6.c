//EVALUATING ALGEBRAIC EXPRESSION
#include<stdio.h>
void main()
{
 int a,b,x;
 float exp;
 printf("****PROGRAM TO EVALUATE ALGEBRAIC EXPRESSION****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("\n enter the value of a:");
 scanf("%d",&a);
 printf("\n enter the value of b:");
 scanf("%d",&b);
 printf("\n enter the value of x:");
 scanf("%d",&x);
 exp=(a*x+b)/(a*x-b);
 printf("The resultant value is:%f",exp);
}
