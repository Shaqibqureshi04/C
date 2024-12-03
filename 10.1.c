Name-Shaqib Qureshi
UIN-241S040
Div-E
exp10.1

#include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2, *ptrSum;
 printf("Enter the first number: ");
 scanf("%d", &num1);
 printf("Enter the second number: ");
 scanf("%d", &num2);
 ptr1 = &num1;
 ptr2 = &num2;
 ptrSum = &sum;
 *ptrSum = *ptr1 + *ptr2;
 printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);
 return 0;
}
/*output 
Enter the first number: 5
Enter the second number: 8
Sum of 5 and 8 is 13