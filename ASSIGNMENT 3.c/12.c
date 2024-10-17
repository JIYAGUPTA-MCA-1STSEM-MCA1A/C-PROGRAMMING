//PROGRAM TO PERFORM ADDITION AND SUBTRACTION BEWTEEN TWO MATRICES
#include <stdio.h>
int main() {
int rows, cols, i, j;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
printf("Enter elements of the first matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
scanf("%d", &matrix1[i][j]);
}
}
printf("Enter elements of the second matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
scanf("%d", &matrix2[i][j]);
}
}
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
result[i][j] = matrix1[i][j] + matrix2[i][j];
printf("%d ", result[i][j]);
}
printf("\n");
}
printf("\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
result[i][j] = matrix1[i][j] - matrix2[i][j];
printf("%d ", result[i][j]);
}
printf("\n");
}
return 0;
}
