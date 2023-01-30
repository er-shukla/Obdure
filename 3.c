//3.Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
check(int a){
	if(a>0){
		printf("number is positive");
	} else if(a=0){
		printf("number is zero");

	}else{
		printf("number is negative");

	}
}
void main(){
int a;
printf("enter a number");
scanf("%d",&a);
check(a);
}