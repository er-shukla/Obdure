//14-Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
check(int a,int b,int c){
	if(a+b+c==180){
		printf("valid teringle");
	}else{
		printf("not a valid tringle");
	}
}
void main(){
	int a,b,c;
	printf("enter the angles of tringle");
	scanf("%d%d%d",a,b,c);
	check(a,b,c);
}