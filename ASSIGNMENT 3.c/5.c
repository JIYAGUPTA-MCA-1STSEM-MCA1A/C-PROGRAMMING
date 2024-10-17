// PROGRAM  TO CONVERT A DECIMAL NUMBER TAKEN AS INPUT FROM A USER TO THE CORRESPONDING DECIMAL NUMBER
#include <stdio.h>
int main() {
int decimalNumber, binaryNumber[32], i = 0;
printf(“NAME: JIYA GUPTA CLASS:MCA1A ROLLNO:27”);
printf("Enter a decimal number: ");
scanf("%d", &decimalNumber);
while (decimalNumber > 0) {
binaryNumber[i] = decimalNumber % 2;
decimalNumber /= 2;
i++;
}
printf("Binary equivalent: ");
for (int j = i - 1; j >= 0; j--) {
printf("%d", binaryNumber[j]);
}
printf("\n");
return 0;
}
