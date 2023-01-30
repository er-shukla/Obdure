//20-Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
basesalary(int basesalary){
	int  HRA, DA, G_S;
	  
    if (basesalary <= 10000)
    {
        HRA = basesalary * 0.20;
        DA = basesalary * 0.80;
        G_S = basesalary + HRA + DA;
        printf("%d", G_S);
    }
    else if (basesalary <= 20000)
    {
        HRA = basesalary * 0.25;
        DA = basesalary * 0.90;
        G_S = basesalary + HRA + DA;
        printf("%d", G_S);
    }
    else
    {
        HRA = basesalary * 0.30;
        DA = basesalary * 0.95;
        G_S = basesalary + HRA + DA;
        printf("%d", G_S);
    }
}

void main(){
	int basesalary;
	printf("enter base salary");
	scanf("%d",&basesalary);
	check(basesalary);
}