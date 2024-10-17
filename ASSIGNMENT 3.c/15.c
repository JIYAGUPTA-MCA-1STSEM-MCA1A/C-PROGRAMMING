//PROGRAM TO PERFORM MULTIPLICATION OF TWO MATRICES 
#include <stdio.h>
void multiplyMatrices(int matrix1[][100], int matrix2[][100], int result[][100], 
int rows1, int cols1, int cols2) {
for (int i = 0; i < rows1; i++) {
for (int j = 0; j < cols2; j++) {
result[i][j] = 0;
for (int k = 0; k < cols1; k++) {
result[i][j] += matrix1[i][k] * matrix2[k][j];
}
}
}
}
int main() {
int matrix1[100][100], matrix2[100][100], result[100][100], rows1, cols1, 
rows2, cols2;
printf(“NAME: JIYA GUPTA CLASS : MCA1A ROLLNO:27\n”);
printf("Enter the number of rows and columns of matrix 1: ");
scanf("%d %d", &rows1, &cols1);
printf("Enter the elements of matrix 1:\n");
for (int i = 0; i < rows1; i++) {
for (int j = 0; j < cols1; j++) {
scanf("%d", &matrix1[i][j]);
}
}
printf("Enter the number of rows and columns of matrix 2: ");
scanf("%d %d", &rows2, &cols2);
if (cols1 != rows2) {
printf("Matrix multiplication is not possible. The number of columns of matrix 1 
must be equal to the number of rows of matrix 2.\n");
return 0;
}
printf("Enter the elements of matrix 2:\n");
for (int i = 0; i < rows2; i++) {
for (int j = 0; j < cols2; j++) {
scanf("%d", &matrix2[i][j]);
}
}
multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
printf("Result of matrix multiplication:\n");
for (int i = 0; i < rows1; i++) {
for (int j = 0; j < cols2; j++) {
printf("%d ", result[i][j]);
}
printf("\n");
}
return 0;
}
