//PROGRAM TO TRANSPOSE A MATRIX
#include <stdio.h>
void transposeMatrix(int matrix[][100], int rows, int cols) {
int transpose[100][100];
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
transpose[j][i] = matrix[i][j];
}
}
printf("Transpose of the matrix:\n");
for (int i = 0; i < cols; i++) {
for (int j = 0; j < rows; j++) {
printf("%d ", transpose[i][j]);
}
printf("\n");
}
}
int main() {
int matrix[100][100], rows, cols;
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &matrix[i][j]);
}
}
transposeMatrix(matrix, rows, cols);
return 0;
}
