/*
 EXPT NO.2.2
 Name:Shaqib Qureshi 
 UIN: 241S040
 BRANCH:COMPUTER  DIV :E  BATCH :E2
*/
#include <stdio.h>

int main () {
    int num1, num2, sum = 0;
    {
    printf("****FIND THE SUM OF ALL ODD NUMBERS ****\v\n");
    printf("Enter 1st Num: ");
    scanf("%d", &num1);
    printf("Enter 2nd Num: ");
    scanf("%d", &num2);
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
        }
    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0) {
            sum += i; 
        }
    }
    printf("Sum of odd Numbers between %d and %d: %d\n", num1, num2, sum);

    return 0;
}
/*
OUTPUT: 
****FIND THE SUM OF ALL ODD NUMBERS ****

Enter 1st Num: 5
Enter 2nd Num: 3
Sum of odd Numbers between 3 and 5: 8

*/