Name-shaqib Qureshi 
UIN-241S040
Div-E
exp8.1

#include <stdio.h>
int main() {
 char str[100];
 int length = 0;
 printf("Enter a string: ");
 scanf("%s", str);
 while (str[length] != '\0') {
 length++;
 }
 printf("The length of the string is: %d\n", length);
 return 0;
}
/*output 
Enter a string: 56
The length of the string is: 2