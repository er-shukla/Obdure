//2 .Write a C program to find maximum between three numbers.

#include<stdio.h>
number(int a,int b,int c){
	if(a>b && a>c){
		printf("max number %d",a);

	}else if(b>a && b>c){
		printf("max number %d",b);

	}else{
		printf("max number %d",c);

	}
}
void main(){
	int a,b,c;
	 printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    
	number(a,b,c);
}