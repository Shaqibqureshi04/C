Name - shaqib Qureshi 
UIN-241S040
Div-c

#include <stdio.h>
int isPrime(int num){ 
if (num < 2){
return 0;
}
for (int i = 2; i * i <= num; i++){
if (num % i == 0)
{
return 0;
}
}
return 1;
}
void findPrimes(int start, int end){
printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++)
{
if (isPrime(i))
{
printf("%d ", i);
}
}
printf("\n");} 
int main(){
int start, end;
printf("Enter the starting number: ");
scanf("%d", &start);
printf("Enter the ending number: ");
scanf("%d", &end);
findPrimes(start, end);
return 0;
}
/*output 

Enter the starting number: 3
Enter the ending number: 45
Prime numbers between 3 and 45 are:
3 5 7 11 13 17 19 23 29 31 37 41 43