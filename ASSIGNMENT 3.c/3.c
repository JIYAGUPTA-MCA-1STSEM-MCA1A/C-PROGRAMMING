// PROGRAM TO  INSERT AN ELEMENT  IN AN ARRAY IN  A PARTICULAR POSITION
. #include <stdio.h>
void insertElement(int arr[], int n, int element, int position) {
 if (position < 0 || position > n) {
 printf("Invalid position!\n");
 return;
 }
 for (int i = n; i > position; i--) {
 arr[i] = arr[i - 1];
 }
 arr[position] = element;
 n++;
}
int main() {
 int n, element, position;
 printf(“NAME:JIYA GUPTA CLASS:MCA1A ROLLNO:27\n”);
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("Enter the element to be inserted: ");
 scanf("%d", &element);
 printf("Enter the position to insert: ");
 scanf("%d", &position);
 insertElement(arr, n, element, position);
 printf("Modified array:\n");
 for (int i = 0; i < n + 1; i++) {
 printf("%d ", arr[i]);
 }
 return 0;
}
