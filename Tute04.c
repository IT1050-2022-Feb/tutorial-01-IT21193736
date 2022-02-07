/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include<stdio.h>
int minimum(int no1,int no2);//decleration minimum
int maximum(int no1,int no2);//decleration maximum
int multiply(int no1,int no2);//decleration multiply
int main() // main function
{
	int no1, no2;
	printf( "Enter a value for no 1 : " );//promt
	scanf("%d", &no1);//get number
	printf( "Enter a value for no 2 : " );//promt
	scanf("%d", &no2);//get number
	printf( "%d ", minimum( no1, no2 ) );//display minimum 
	printf("%d ", maximum( no1, no2 ) );//display maximum 
	printf( "%d ", multiply( no1, no2 ) );//display multiply 
	
	return 0;
}//end main function
int minimum( int no1, int no2 ){//minimum function
	if ( no1 < no2 ){
		return no1;
	}
	else{
		return no2;
	}
	
}//end function
int maximum( int no1,int no2 ){//maximum function
	if ( no1 > no2 ){
		return no1;
	}
	else{
		return no2;
	}
}//end function
int multiply( int no1,int no2 )//multiply function
{
	return no1 * no2;
}//end function

