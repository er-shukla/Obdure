//4.Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>

void check(int a){
if(a%5==0 && a%11==0){
	printf("the number is divisible by 5 and 11");
}else{
	printf("the number is not divisible by 5 and 11");
}
}
void main(){
	int a;
	printf("enter a number");
	scanf("%d",&a);
	check(a);
}