//PROGRAM TO FIND THE SUM OF DIGITS OF THE NUMBER USING RECURSIVE FUNCTION
#include<stdio.h>
int sum_of_digits(int n)
{
if(n ==0){
return 0;
} else {
return n % 10 + sum_of_digits(n/10);
}
}
int main()
{
printf("NAME: JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
int num;
printf("enter a number:");
scanf("%d",&num);

int result= sum_of_digits(num);
printf("The sum of the digits of %d is: %d\n",num, result);
}
