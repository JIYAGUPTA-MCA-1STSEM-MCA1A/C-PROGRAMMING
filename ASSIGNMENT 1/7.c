//PERFECT NUMBER OR NOT
#include<stdio.h>
 void main()
 {
 int num,rem,sum=0,i;
printf("****PROGRAM TO CHECK IF A GIVEN NUMBER IS PERFECT OR
NOT****\n");
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLL:27\n");
printf("enter a number\n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
rem=num%i;
if(rem==0)
sum=sum+i;
}
if(sum==num)
printf("%d is a Perfect number",num);
else
printf("%d is not a Perfect number",num);
}
