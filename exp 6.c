/*
 EXPERIMENT NO 6
 
 TITLE :Wap to define a counter a function to
 print how many time the function is called.
 Use storage classes.
 
 Name : shaqib Qureshi 

 Division : E
 UIN-241S040
 */
 
 #include<stdio.h>
 
void counter ()
 {
 //Using Storage classes//
 static count = 0;
 count ++;
 printf("Counter called: %d times\n",count);
 }
 
 //main function 
 int main()
 {
 counter();
 counter();
 counter();
 counter();
 

 
 return 0;
 }

 /*OUTPUT
 Counter called: 1 times
 Counter called: 2 times
 Counter called: 3 times
 Counter called: 4 times
 */