//17-Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
check(int a,int b,int c){
	int root1,root2;
	int sim = b * b - 4 * a * c;
	if (sim > 0) {
     root1 = (-b + sqrt(sim)) / (2 * a);
     root2 = (-b - sqrt(sim)) / (2 * a);

    printf("%d%d",root1,root2);
}

else if (sim == 0) {
    root1 = root2 = -b / (2 * a);

    printf("%d%d",root1,root2);
}

else {
     int realPart = (-b / (2 * a));
     int imgPart = (sqrt(-sim) / (2 * a));

   root1=realPart+imgPart;
   root2=realPart-imgPart;
   printf("root 1%d root 2%d",root1,root2);
}

}
void main(){
	int a,b,c;
	printf("enter the value of 'a','b'and'c'");
	scanf("%d%d%d",&a,&b,&c);
	check(a,b,c);
}
