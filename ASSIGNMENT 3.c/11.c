//PROGRAM TO FIND THE SECOND-HIGHEST NUMBER FROM AN ARRAY WITHOUT USING SORTING
#include <stdio.h>
int main() {
int n, i, largest, secondLargest;
printf(“NAME:JIYA GUPTA CLASS: MCA1A ROLLNO:27\n”);
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
largest = arr[0];
secondLargest = arr[0];
for (i = 1; i < n; i++) {
if (arr[i] > largest) {
secondLargest = largest;
largest = arr[i];
} else if (arr[i] > secondLargest && arr[i] != largest) {
secondLargest = arr[i];
}
}
 printf("Second largest element: %d\n", secondLargest);
return 0;
}
