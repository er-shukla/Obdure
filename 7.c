//7.Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
 check (char char1){

	
if(char1>="a" && char1<="z"){
  printf("alphabet");

  
}
else if(char1>="A" && char1<="Z")
{
     printf("alphabet");
}
else{
 printf("not a alphabet");
}

}

void main(){
	char char1;
	printf("enter a character");
	scanf("%c",&char1);
	check(char1);
	
	 
}