#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(int a[],int size){
	for (int i = 0,j=size-1; i < j; ++i,--j){
		swap(&a[i],&a[j]);
	}
}
void print_array(int a[],int size){
	for (int i = 0; i < size; ++i){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
	int a[]={1,124,21,4,5,8,3,56,52};
	int size=sizeof(a)/sizeof(a[0]);
	print_array(a,size);
	reverse(a,size);
	print_array(a,size);
}