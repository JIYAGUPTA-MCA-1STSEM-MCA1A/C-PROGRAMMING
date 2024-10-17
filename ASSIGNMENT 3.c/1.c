#include <stdio.h>
int main()
int n, i;
printf("NAME:JIYA GUPTA CLASS:MCA1A  ROLLNO:27\n");
printf("Enter the number of students: ");
scanf("%d", &n);
int marks[n];
printf("Enter the number of students: ");
scanf("%d", &n);
printf("Enter marks for %d students:\n", n);
for (i = 0; i < n; i++) {
printf("Student %d: ", i + 1);
scanf("%d", &marks[i]);
}
printf("\nMarks of all students:\n");
for (i = 0; i < n; i++) {
printf("Student %d: %d\n", i + 1, marks[i]);
}
return 0;
}
