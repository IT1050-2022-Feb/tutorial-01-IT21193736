/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main(void)
{
	int mark1,mark2,total;// variables
	float average;
	
	printf("Enter 1st mark:");//promt
	scanf("%d",&mark1);//get marks
	
	printf("Enter 2nd mark:");//promt
	scanf("%d",&mark2);//get 2nd mark
	
	total = mark1 + mark2;// calculation
	average = (float)total / 2;//calculation
	printf( "Average mark is :%.2f ",average );//display average
	
	return;
}