//PROGRAM TO CHECK WHEATHERR THE FOLLOWING NO IS PRIME, ARMSTRONG OR PERFECT NUMBER USING FUCNTIONS
9. #include<stdio.h>
#include<math.h>

int isPrime(int num)
{
if (num <= 1)
return 0;
for(int i=2;i<=sqrt(num);i++)
{

if(num % i==0)
return 0;
}
return 1;
}

int isArmstrong(int num)
{
int originalnum = num, sum = 0, digits = 0;

while(num != 0)
{
digits++;
num /= 10;
}
num = originalnum;

while(num != 0)
{
int digit = num % 10;
sum += pow(digit, digits);
num /= 10;
}

if (sum == originalnum)
return 1;
else
return 0;
}

int isPerfect( int num)
{
int sum = 1;
for( int i = 2; i <=num / 2; i++)
{
if (num % i ==0)
sum += i;
}
if (sum == num)
return 1;
else
return 0;
}
int main()
{
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
int num;
printf("enter a number:");
scanf("%d", &num);
if (isPrime(num))
printf("%d is a prime number.\n",num);
if (isArmstrong(num))
printf("%d is an armstrong number.\n",num);
if (isPerfect(num))
printf("%d is a perfect number.\n",num);
}
