/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;
	int count=1;
	int total=0;
	
	printf("Enter n th number = ");
	scanf("%d",&n);
	for(count=1;count<=n;++count)
	{
		total=total+count;
	}
	printf("Total = %d\n",total);
  
  return 0;
}

