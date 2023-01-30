//16-Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
check(int a,int b,int c){
	if(a == b && b == c){
 printf("The Given Triangle is equilateral");
}else if(a == b || b == c || c == a){
    printf("The given Triangle is isosceles");
}else{
    printf("The given Triangle is scalene");
}
}
void main(){
	int a,b,c;
	printf("enter the branches of the tringle");
	scanf("%d%d%d",&a,&b,&c);
	check(a,b,c);
}