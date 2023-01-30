//19-Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include<stdio.h>
check(int a,int b,int c,int d,int e){
	int sum,percent;
	sum=a+b+c+d+e;
	percent= (sum*100)/500;
	if(percent>=90){
    printf("Grade A");
}else if(percent>=80){
    printf("Grade B");
}else if(percent>=70){
    printf("Grade C");
}else if(percent>=60){
    printf("Grade D");
}else if(percent>=40){
    printf("Grade E");
}else if(percent<40){
    printf("Grade F");
}



}

void main(){
	int a,b,c,d,e;
	printf("enter the marks of Physics");
	scanf("%d",&a);
	printf("enter the marks of Chemistry");
	scanf("%d",&b);
	printf("enter the marks of Biology");
	scanf("%d",&c);
	printf("enter the marks of Mathmatics");
	scanf("%d",&d);
	printf("enter the marks of Computer");
	scanf("%d",&e);
	check(a,b,c,d,e);
}