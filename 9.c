Name- Shaqib Qureshi 
UIN-241S040
Div-E
exp9

#include <stdio.h>
#include <string.h>
struct student_record {
 char name[50];
 int roll_number;
 float total_marks;
};
int main() {
 struct student_record students[5];
 int topperIndex = 0;
 for (int i = 0; i < 5; i++) {
 printf("Enter details for student %d:\n", i + 1);
 printf("Name: ");
 scanf(" %[^\n]", students[i].name);
 printf("Roll Number: ");
 scanf("%d", &students[i].roll_number);
 printf("Total Marks: ");
 scanf("%f", &students[i].total_marks);
 if (students[i].total_marks > students[topperIndex].total_marks) {
 topperIndex = i;
 }
 }
 printf("\nTopper:\n");
 printf("Name: %s\n", students[topperIndex].name);
 printf("Roll Number: %d\n", students[topperIndex].roll_number);
 printf("Total Marks: %.2f\n", students[topperIndex].total_marks);
 return 0;
}
/*output
Enter details for student 1:
Name: binod
Roll Number: 45
Total Marks: 65
Enter details for student 2:
Name: bhupendra jogi
Roll Number: 34
Total Marks: 55
Enter details for student 3:
Name: keshav jha
Roll Number: 23
Total Marks: 45
Enter details for student 4:
Name: bala
Roll Number: 42
Total Marks: 56
Enter details for student 5:
Name: Perpendicular
Roll Number: 25
Total Marks: 64

Topper:
Name: binod
Roll Number: 45
Total Marks: 65.00