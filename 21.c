//21.Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include<stdio.h>
check(int unit ){
	int rs;
if(unit<=50){
     rs=unit*0.5;
    
} else if(unit<=150){
    rs =25  + (unit-50)*0.75;
}else if(unit<=250){
    rs=100+ (unit-150)*1.20;
}else if(unit>=250){
    rs=220+ (unit-250)*1.50;
}
int totalrs= rs+rs*0.2;
printf("%d",totalrs);
}
void main(){
	int unit;
	printf("enter the units");
	scanf("%d",&unit);
	check(unit);
}