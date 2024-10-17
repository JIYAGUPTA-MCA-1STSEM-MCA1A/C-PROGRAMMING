//PROGRAM TO FIND THE SMALLEST AND THE LARGEST ELEMENT IN AN ARRAY
#include <stdio.h>
int main() {
int n, i;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27”);
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int smallest = arr[0];
int largest = arr[0];
for (i = 1; i < n; i++) {
if (arr[i] < smallest) {
smallest = arr[i];
}
if (arr[i] > largest) {
largest = arr[i];
}
}
printf("Smallest element: %d\n", smallest);
printf("Largest element: %d\n", largest);
return 0;
}
