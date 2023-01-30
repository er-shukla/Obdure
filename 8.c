//8.Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
 check (char ch){
	
	
if(ch =="a" || ch=="e" || ch=="i" || ch=="o" || ch=="u")
  printf("Vowel");
else if(ch=="A" || ch=="E" || ch=="I" || ch=="O" || ch=="U")
  printf("Vowel" );
else
  printf("consonants" );

}

void main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	check(ch);
	
	 
}
