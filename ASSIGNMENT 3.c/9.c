// PROGRAM TO SEARCH FOR A PARTICULAR ELEMENT IN AN AARAY
#include <stdio.h>
int main() {
int n, i, element, found = 0;
printf(“NAME”JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the element to be searched: ");
scanf("%d", &element);
for (i = 0; i < n; i++) {
if (arr[i] == element) {
found = 1;
break;
}
}
if (found) {
printf("Element found at index %d\n", i);
} else {
printf("Element not found\n");
}
return 0;
}
