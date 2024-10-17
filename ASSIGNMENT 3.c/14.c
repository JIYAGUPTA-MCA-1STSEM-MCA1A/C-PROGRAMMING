//PROGRAM TO ADD THE ELEMENTS OF EACH ROW AND EACH COLUMN OF A MATRIX
#include <stdio.h>
void addElements(int matrix[][100], int rows, int cols) {
int rowSums[100], colSums[100];
for (int i = 0; i < rows; i++) {
rowSums[i] = 0;
}
for (int j = 0; j < cols; j++) {
colSums[j] = 0;
}
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
rowSums[i] += matrix[i][j];
colSums[j] += matrix[i][j];
}
}
printf("Row sums: ");
for (int i = 0; i < rows; i++) {
printf("%d ", rowSums[i]);
}
printf("\n");
printf("Column sums: ");
for (int j = 0; j < cols; j++) {
printf("%d ", colSums[j]);
}
printf("\n");
}
int main() {
int matrix[100][100], rows, cols;
printf(“NAME : JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &matrix[i][j]);
}
}
addElements(matrix, rows, cols);
return 0;
}
