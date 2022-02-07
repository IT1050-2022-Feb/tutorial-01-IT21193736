/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main( void )
{
	int ;//veriables
	int total, i, count;//veriables

	printf( "Enter your number :" );//promt
	scanf( "%d",&count );// get number
	
	while( i <= count ){//count
		total = total + i; //calculation
		i++;
		
	}
	
	printf( "\nTotal is %d",total );// print total
	

	
	return 0;
}

