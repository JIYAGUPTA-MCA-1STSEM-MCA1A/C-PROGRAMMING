//PROGRAM TO READ AN INTEGER NUMBERR AND PRINT THE REVERSE OF THAT NUMBER USING FUNCTION
6. #include<stdio.h>
int reverse_number(int n, int reversed)
{
if(n==0){
return reversed;
} else {
return reverse_number(n/10, reversed * 10 + n % 10);
}
}
int main()
{
printf("NAME : JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");
int num;
printf("enterr a number:");
scanf("%d",&num);
int reversed = reverse_number(num,0);
printf("the reversed number is:%d\n", reversed);
}
