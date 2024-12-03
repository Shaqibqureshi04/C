Name-Shaqib Qureshi 
UIN-241S040
Div-E
Exp7.1-

#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int largest = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
}
printf("The largest element in the array is: %d\n", largest);
return 0;
}
/*output 
Enter the number of elements in the array: 5
Enter 5 elements:
33
5
66
24
6
The largest element in the array is: 66