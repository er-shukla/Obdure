//1 Write a C program to find maximum between two numbers.


#include<stdio.h>
void max(int a,int b){
    if(a>b){
        printf("%d",a);
        
    } else if(b>a){
        printf("%d",b);
    }
    
    
}
void main(){
    
    int a,b;
    printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&b);
    max(a,b);
}