Name-Shaqib Qureshi 
UIN-241S040
Div-E
exp-7.2

#include <stdio.h>
int main() {
 int rows, cols;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 printf("Enter the number of columns: ");
 scanf("%d", &cols);
 int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
 printf("Enter elements of the first matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix1[i][j]);
 }
 }
 printf("Enter elements of the second matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix2[i][j]);
 }
 }
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 sum[i][j] = matrix1[i][j] + matrix2[i][j];
 }
 }
 printf("Sum of the two matrices:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("%d ", sum[i][j]);
 }
 printf("\n");
 }
 return 0;
}
/*output 
Enter the number of rows: 6
Enter the number of columns: 6
Enter elements of the first matrix:
1 4 3 6 2 5
2 5 2 5 2 5
2 4 6 2 6 4
2 5 4 5 2 7
6 3 7 3 5 6
2 7 2 7 3 6
Enter elements of the second matrix:
2 7 3 7 3 7
4 3 2 6 8 2
3 6 2 7 3 7
3 7 3 3 8 3
2 7 3 6 3 7
2 7 4 7 3 6
Sum of the two matrices:
3 11 6 13 5 12
6 8 4 11 10 7
5 10 8 9 9 11
5 12 7 8 10 10
8 10 10 9 8 13
4 14 6 14 6 12