// PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD USING FUNCTION
8. #include<stdio.h>
int iseven(int num)
{
if ( num % 2==0)
return 1;
else
return 0;
}
int main()
{

printf(" NAME : JIYA GUPTA CLASS: MCA1A ROLLNO:27\n");
int num;
printf("enter a number:");
scanf("%d", &num);

if(iseven(num))
printf("%d is even.\n", num);
else
printf("%d is odd.\n", num);
}
