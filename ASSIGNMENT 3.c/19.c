//PROGRAM TO DEFINE A STRUCTURE "COMPLEX" OT READ TWO COMPLEX NUMBERS AND PERFORM
//ADDITION, SUBTRACTION OF THESE TWO COMPLEX NUMBERS AND DISPLAY THE RESULT.
. #include <stdio.h>
typedef struct {
float real;
float imag;
} complex;
complex addComplex(complex num1, complex num2) {
complex result;
result.real = num1.real + num2.real;
result.imag = num1.imag + num2.imag;
return result;
}
complex subtractComplex(complex num1, complex num2) {
complex result;
result.real = num1.real - num2.real;
result.imag = num1.imag - num2.imag;
return result;
}
int main() {
complex num1, num2, sum, difference;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
printf("Enter the real and imaginary parts of the first complex number: ");
scanf("%f %f", &num1.real, &num1.imag);
printf("Enter the real and imaginary parts of the second complex number: ");
scanf("%f %f", &num2.real, &num2.imag);
sum = addComplex(num1, num2);
difference = subtractComplex(num1, num2);
printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
printf("Difference of the complex numbers: %.2f + %.2fi\n", difference.real, 
difference.imag);
return 0;
}
