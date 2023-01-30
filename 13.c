//13-Write a C program to count total number of notes in given amount.
#include<stdio.h>
check(int amount){
	printf("\n2000 notes %d",amount/2000);
	printf("\n500 notes %d",amount/500);
	printf("\n100 notes %d",amount/100);
	printf("\n50 notes %d",amount/50);
	printf("\n20 notes %d",amount/20);
	printf("\n10 notes %d",amount/10);
	printf("\n5 notes %d",amount/5);
	printf("\n2 notes %d",amount/2);
	printf("\n1 notes %d",amount/1);
	
	
}
void main(){
	int amount;
	printf("enter the amount ");
	scanf("%d",&amount);
	check(amount);
}