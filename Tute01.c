/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   float average;
   printf("enter mark1 : \n");
   scanf("%d",&mark1);
   printf("enter mark2 : \n");
   scanf("%d",&mark2);
   average=(mark1+mark2)/2;
   printf("average = %.2f\n",average);
  
  return 0;
}

