//PROGRAM TO CREATE A STRUCTURE NAMED COMPANY WHICH HAS NAME, ADDRESS,PHONE AND NO OF EMPLOYEES,
#include <stdio.h>
struct company {
char name[100];
char address[200];
char phone[20];
int no_of_employees;
};
int main() {
struct company company_info;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO;27\n”);
printf("Enter the name of the company: ");
scanf("%s", company_info.name);
printf("Enter the address of the company: ");
scanf("%s", company_info.address);printf("Enter the phone number of the 
company: ");
scanf("%s", company_info.phone);
printf("Enter the number of employees: ");
scanf("%d", &company_info.no_of_employees);
printf("\nCompany Information:\n");
printf("Name: %s\n", company_info.name);
printf("Address: %s\n", company_info.address);
printf("Phone: %s\n", company_info.phone);
printf("Number of Employees: %d\n", company_info.no_of_employees);
return 0;
}
