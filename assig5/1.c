#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 1000
int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b){
	return a>b?b:a;
}
void MaxMin(int a[],int size,int *max_prt,int *min_ptr){
	*max_prt=-1;
	*min_ptr=INT_MAX;
	for (int i = 0; i < size; ++i){
		*max_prt=max(*max_prt,a[i]);
		*min_ptr=min(*min_ptr,a[i]);
	}
}
int main(){
	int a[]={1,124,21,4,5,8,3,56,52,0};
	int size=sizeof(a)/sizeof(a[0]);
	int *max_prt=(int*)malloc(sizeof(int));
	int *min_ptr=(int*)malloc(sizeof(int*));
	MaxMin(a,size,max_prt,min_ptr);
	printf("Maximum value is:%d, Manimum value is:%d\n",*max_prt,*min_ptr);
}