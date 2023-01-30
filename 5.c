//5.Write a C program to check whether a number is even or odd.
#include <stdio.h>


void checkEvenOdd(int N)
{
	

	if (N%2==0) {
		printf("Even");
	}

	else {
		printf("Odd");
	}
}

int main()
{
	int N;
	scanf("%d",&N);

	checkEvenOdd(N);

	return 0;
	
}
