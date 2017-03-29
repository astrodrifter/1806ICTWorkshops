/*Write a program that will convert a decimal number to its binary equivalent. Use functions in
  your program.
  
     Dhruva O'Shea 29/03/2017
  
*/

#include <stdio.h>

//PROTYPES
int getNum();
int convertToBinary(int);

//MAIN
int main(int argc, char **argv)
{
	int num;
	num = getNum(); //get number
	convertToBinary(num); // convert number to binary
	return 0;
} //end program


//FUNCTIONS

// gets user number to convert
int getNum() 
{
	int n;
	printf("\nEnter your decimal number and HAL 9000 will convert it to binary.\n");
	scanf("%i",&n);
	printf("\n");
	return n;
}

// converts user number to binary
int convertToBinary(int n) 
{
	int remainder;
	while(n != 0){
		remainder = n%2;
		n = n/2;
		printf("%i",remainder);
	}
	printf("\n\n");
	return 0;
}