// PROGRAM TO GENERATE A FIBINACCI SERIES USING A RECURSIVE FUNCTION
3. #include<stdio.h>
int fibonacci(int n)
{
if(n<=1)
{
return n;
}
else
{
return fibonacci (n- 1) + fibonacci (n-2);

}
}
int main()
{
printf("NAME: JIYA GUPTA CLASS: MAC1A ROLLNO:27\n");
int n;
printf("enter the number of terms in the fibonacci series:");
scanf("%d" ,&n);
printf("Fibonacci series:\n");
for(int i=0; i<n;i++){
printf("%d" , fibonacci(i));
}
printf("/n");
}
