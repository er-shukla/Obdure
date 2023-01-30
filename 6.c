//6-Write a C program to check whether a year is leap year or not.

#include<stdio.h>
check(int year){
	if(year%400==0||year%4==0 &&year%100!=0){
     printf("leap year");

	}else{
		printf("not a leap year");
	}
}
main(){
	int year;
	printf("enter a year nam");
	scanf("%d",&year);
	check(year);
}