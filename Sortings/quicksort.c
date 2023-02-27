#include<stdio.h>

void print(int A[],int n){

    for(int i=0;i<n;i++){

printf("%d",A[i]);

    }
}

int partition(int A[],int low,int high){

   int i=low+1;
    int pivot=A[low];
int j=high;
int temp;
    do{
 
while (A[i]<=pivot)
{
    i++;
}

while (A[j]>pivot)
{
    j--;
}
if(i<j){
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;

}
}while( i<j);

temp=A[j];
A[j]=A[low];
A[low]=temp;

return j;

}
void quicksort(int A[],int low,int high){
    int partitionindex;
if(low<high){
    partitionindex=(partition(A,low,high));
    quicksort(A,low,partitionindex-1);
    quicksort(A,partitionindex+1,high);

}
}



void main(){
    int A[]={9,2,1,8,6,4,4};
    int n=7;
    print(A,n);
    quicksort(A,0,n-1);
    printf("\n");
     print(A,n);

}