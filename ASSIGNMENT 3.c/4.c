// PROGRAM TO DELETE AN ELEMENT FROM A PARTICULAR POSITION 
#include <stdio.h>
 void deleteElement(int arr[], int n, int position) {
 if (position < 0 || position >= n) {
 printf("Invalid position!\n");
 return;
 }
 for (int i = position; i < n - 1; i++) {
 arr[i] = arr[i + 1];
 }
 n--;
}
int main() {
 int n, position;
 printf(“NAME : JIYA GUPTA CLASS:MCA1A  ROLLNO:27\n");
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Enter the position to delete: ");
 scanf("%d", &position);
 deleteElement(arr, n, position);
 printf("Modified array:\n");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 return 0;
}
