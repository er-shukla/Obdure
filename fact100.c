#include<stdio.h>
long value(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * value(n-1));  
}  
   
void main()  
{  
  int num;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &num);   
   
  fact = value(num);  
  printf("Factorial of %d is %ld", num, fact);  
  return 0;  
}  


