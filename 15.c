//15-Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
check(int a,int b,int c){
	if (a+b>c && b+c>a &&c+a>b){
    printf("It is a triangle");
}
else{
    printf("It is not a triangle");
    }
}

void main(){
	int a,b,c;
	printf("enter the sides of tringle");
	scanf("%d%d%d",&a,&b,&c);
	check(a,b,c);
}