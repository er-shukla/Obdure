//18-Write a C program to calculate profit or loss.

#include<stdio.h>

check(int cp, int sp){
	if(sp>cp){
    int  profit=sp-cp;
    printf ("profit %d",profit);
}
else if(cp>sp){
    int loss=cp-sp;
    printf("loss %d ",loss);

}else{
    printf("no profit");
}
}
void main(){
	int cp,sp;
	printf("enter the current price and sell price ");
	scanf("%d%d",&cp,&sp);
	check(cp,sp);
}