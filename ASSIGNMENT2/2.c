// PROGRAM TO CALCULATE THE SUM OF 20 NATURAL NUMBERRS USING RECURSIVE FUNCTION2. #include<stdio.h>
int sum_recursive(int n)
{
if(n==0){
return 0;

} else {
return n + sum_recursive(n -1);
}
}
int main(){
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");

int result = sum_recursive(20);
printf("The sum of the first 20 natural number is :%d\n", result);
return 0;
}
