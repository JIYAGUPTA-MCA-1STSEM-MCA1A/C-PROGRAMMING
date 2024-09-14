// USING C FUNCTION, WRITE A C PROGRAM TO FIND THE MAXIMUM AND MINIMUM BETWEEN 2 NUMBERS
7. #include<stdio.h>
int maximum(int a, int b)
{
if(a > b){
return a;
} else {
return b;
}
}
int minimum(int a, int b)
{
if (a < b){
return a;
} else {
return b;
}
}
int main()
{
printf("NAME: JIYA GUPTA CLASS: MCA1A ROLLNNO:27\n");
int num1, num2;

printf("enter two numbers:");
scanf("%d %d", &num1, &num2);

int max = maximum(num1, num2);
int min = minimum(num1, num2);

printf("The maximum number is: %d\n", max);
printf("The minimum number is: %d\n", min);

return 0;
}
