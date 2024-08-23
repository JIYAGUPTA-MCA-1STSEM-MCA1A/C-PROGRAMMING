//LEAP YEAR OR NOT
 #include<stdio.h>
void main()
{
 int year;
 printf("****PROGRAM TO CHECK IS A YEAR IS A LEAP YEAR OR NOT****\n");
 printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
 printf("enter a year:");
 scanf("%d",&year);
 if((year%4==0) && (year%400==0) || (year%100!=0))
 printf("it is a leap year");
 else
 printf("it is not leap year");
}
