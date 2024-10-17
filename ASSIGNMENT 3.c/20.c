// PROGRAM TO READ A ROLLNO, NAME, ADDRESS, AND AGE, MARKS OF 12 STUDENTS IN 
//THE BCT CLASS TO DISPLAY THE DETAILS FROM THE FUNCTION.
#include <stdio.h>
struct student {
int rollno;
char name[100];
char address[200];
int age;
float marks;
};
void readStudentDetails(struct student students[], int n) {
for (int i = 0; i < n; i++) {
printf("Enter details for student %d:\n", i + 1);
printf("Roll No: ");
scanf("%d", &students[i].rollno);
printf("Name: ");
scanf("%s", students[i].name);
printf("Address: ");
scanf("%s", students[i].address);
printf("Age: ");
scanf("%d", &students[i].age);
printf("Marks: ");
scanf("%f", &students[i].marks);
}
}
void displayStudentDetails(struct student students[], int n) {
printf("\nStudent Details:\n");
printf("-------------------------------------\n");
printf("Roll No Name Address Age Marks\n");
printf("-------------------------------------\n");
for (int i = 0; i < n; i++) {
printf("%-8d %-15s %-20s %-5d %.2f\n", students[i].rollno, students[i].name, 
students[i].address, students[i].age, students[i].marks);
}
printf("-------------------------------------\n");
}
int main() {
struct student students[12];
int n = 12; 
readStudentDetails(students, n);
displayStudentDetails(students, n);
return 0;
}
