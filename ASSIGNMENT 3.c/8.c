//PROGRAM FOR DELETING DUPLICATE ELEMENTS IN AN ARRAY
#include <stdio.h>
int main() {
int n, i, j, k;
printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27”);
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
for (k = j; k < n - 1; k++) {
arr[k] = arr[k + 1];
}
n--;
j--; //
}
}
}
printf("Array after removing duplicates:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
