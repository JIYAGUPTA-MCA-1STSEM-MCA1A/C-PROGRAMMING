//PROGRAM TO FIND THE POWER OF ANY NUMBER USING RECURSION
10. #include<stdio.h>
int power(int base, int exponent)
{
if(exponent ==0)
return 1;
else
return base * power(base, exponent - 1);
}
int main()
{
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27");
int base, exponent, result;
printf("Enter the base number:\n");
scanf("%d", &base);
printf("enterr the exponent:");
scanf("%d", &exponent);
result = power(base, exponent);
printf("%d raised to the power of %d is %d\n", base, exponent, result);

}
