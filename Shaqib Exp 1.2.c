/*
     EXPT NO:1.2
     NAME: Shaqib Qureshi 
     WAP: To print the average of PCM marks
               and show the eligibility criteria 
               eligible at 50 %
     UIN:241S040
     BRANCH: COMP DIV: E
 */
#include<stdio.h>
int main()
{
  int P,C,M,avg;
   printf("ENTER MARKS (PCM)\n");
   printf("P:");
     scanf("%d",&P);
   printf("C:");
     scanf("%d",&C);
   printf("M:");
     scanf("%d",&M);
      avg=(P+C+M)/3.;
   printf("AVERAGE OF PCM=%f%%\n\n",P,C,M,avg);
     printf("\n");
   if (avg <=50){
     printf("YOU ARE NOT ELIGIBLE(SORRY)");
    }
   else {
     printf("CONGRATULATIONS YOU ARE ELIGIBLE");
     }
  return 0;
}
/*
OUTPUT 1 :  
NTER MARKS (PCM)
P:45
C:56
M:68
AVERAGE OF PCM=56.333333%


CONGRATULATIONS YOU ARE ELIGIBLE
OUTPUT 2:
ENTER MARKS (PCM)
P:15
C:17
M:12
AVERAGE OF PCM=14.666667%


YOU ARE NOT ELIGIBLE(SORRY)
*/
