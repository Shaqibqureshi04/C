Name-shaqib qureshi
UIN-241S040
Div-E
exp10.2

#include <stdio.h>
int main() {
 int n;
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
 int arr[n];
 int *ptr = arr;
 printf("Enter %d elements:\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", ptr + i);
 }
 printf("Array elements in reverse order:\n");
 for (int i = n - 1; i >= 0; i--) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 return 0;
}
/*output 
Enter the number of elements in the array: 6
Enter 6 elements:
45
55
65
75
85
95
Array elements in reverse order:
95 85 75 65 55 45