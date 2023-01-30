//9.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
 check (char char1){

	
if(char1>="a" && char1<="z"){
  printf("Lower case");

  
}
else if(char1>="A" && char1<="Z")
{
     printf("Upper Case");
}


}

void main(){
	char char1;
	printf("enter a alphabet");
	scanf("%c",&char1);
	check(char1);
	
	 
}