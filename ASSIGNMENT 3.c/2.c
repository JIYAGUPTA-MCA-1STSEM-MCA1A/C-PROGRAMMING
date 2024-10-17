//PROGRAM TO STORE THE MARKS OF THE SUBJECT MATHEMATICS AND ENGLISH OF N NO OF STUDENTS IN AN ARRAY AND PRINT THEIR TOTAL
#include <stdio.h>
int main() {
 int n, i;
 printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
 printf("Enter the number of students: ");
 scanf("%d", &n);
 int mathMarks[n], englishMarks[n];
 printf("Enter marks for %d students:\n", n);
 for (i = 0; i < n; i++) {
 printf("Student %d:\n", i + 1);
 printf(" Mathematics: ");
 scanf("%d", &mathMarks[i]);
 printf(" English: ");
 scanf("%d", &englishMarks[i]);
 }
 int totalMarks[n];
 for (i = 0; i < n; i++) {
 totalMarks[i] = mathMarks[i] + englishMarks[i];
 }
 printf("\nTotal marks for %d students:\n", n);
 for (i = 0; i < n; i++) {
 printf("Student %d: %d\n", i + 1, totalMarks[i]);
 }
 return 0;
}
