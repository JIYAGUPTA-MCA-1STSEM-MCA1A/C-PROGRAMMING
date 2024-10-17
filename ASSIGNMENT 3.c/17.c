//PROGRAM TO CHECK WHETHER A MATRIX IS A SPARSE MATRIX OR NOT
. #include <stdio.h>
int isSparseMatrix(int matrix[][100], int rows, int cols) {
int count = 0;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
if (matrix[i][j] != 0) {
count++;
}
}
}
if (count <= (rows * cols) / 2) {
return 1; // Sparse matrix
} else {
return 0; // Dense matrix
}
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
if (isSparseMatrix(matrix, rows, cols)) {
printf("The matrix is a sparse matrix.\n");
} else {
printf("The matrix is not a sparse matrix.\n");
}
return 0;
}
