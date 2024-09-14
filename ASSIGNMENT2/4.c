//PROGRAM TO SWAP TWO INTEGERS USING CALL_BY_VALUE AND CALL_BY_REFERENCE METHODS OF PASSING ARGUMENTS TO A FUNCTION
4. #include<stdio.h>
void swap_by_value(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("Inside swap_by_value: a = %d, b = %d\n", a, b);

}
void swap_by_reference(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
printf("Inside swap_by_reference: a = %d, b = %d/n",*a , *b);
}

int main()
{
printf("NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n");

int x = 10, y = 20;
printf("Before swapping:x = %d, y = %d\n",x ,y);

swap_by_value(x ,y);
printf("After swap_by_value: x = %d , y = %d\n", x, y);

swap_by_reference(&x, &y);
printf("After swap_by_reference: x = %d , y = %d\n", x, y);
}

