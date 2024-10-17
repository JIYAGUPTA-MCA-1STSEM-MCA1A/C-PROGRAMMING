//PROGRAM TO CHECK WHETHER A MATRIX IS AN IDENTITY MATRIX OR NOT 
#include <stdio.h>
int isIdentityMatrix(int matrix[][100], int rows, int cols) {
if (rows != cols) {
return 0; 
}
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
if (i == j && matrix[i][j] != 1) {
return 0; 
} else if (i != j && matrix[i][j] != 0) {
return 0; 
}
}
}
return 1; 
}
int main() {
int matrix[100][100], rows, cols;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &matrix[i][j]);
}
}
if (isIdentityMatrix(matrix, rows, cols)) {
printf("The matrix is an identity matrix.\n");
} else {
printf("The matrix is not an identity matrix.\n");
}
return 0;
}
