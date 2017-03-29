/*A Fibonacci series is a series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, … where the next
number is found by adding up the two numbers before it. Write a function that will find the n
th integer in the Fibonacci series. 
 
 Dhruva O'Shea 29/03/2017

 * get number
 * for number do fibonacci
 * fibonacci formula Fn = Fn-1 + Fn-2
 
*/

 #include <stdio.h>
 
int getNum();
int findFibonacci(int);

int main(int argc, char **argv)
{
	int num;
	
	num = getNum();
	
	findFibonacci(num);
	
	return 0;
}

//get user input number
int getNum() 
{
	printf("Enter an integer and I'll find it's Fibonacci.\t");
	int n;
	scanf("%i",&n);
	return n;
}

//finds the fibonacci series for num
int findFibonacci(int n) {
	
	int nextTerm = 0, t1 = 0, t2 = 1;
	
	for (int i = 1; i < n; ++i) {
		
		//if number was 0
		if (i == 1){
		printf("%i\n",t1);
		}
		
		//if number was 1
		if (i == 2){
		printf("%i\n",t2);
		}
		
		//fibonacci magic algorythm
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		printf("%i\n", nextTerm);
	}
	return nextTerm;
}