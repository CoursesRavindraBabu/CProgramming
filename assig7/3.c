#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++){
		key = arr[i];
		j = i-1;
		while (j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}
void print_array(int array[],int n){
	for (int i = 0; i < n; ++i){
		printf("%d\t",array[i] );
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int n=argc-1;
	int array[argc];
	for (int i = 1; i <argc; ++i){
		array[i-1]=atof(argv[i]);
	}

	print_array(array,n);
	insertionSort(array,n);
	print_array(array,n);
	if(n%2==0){
		printf("The median of given numbers is:%f\n",(float)(array[n/2]+array[n/2-1])/2);
	}else{
		printf("The mediaan of given numbers is:%f\n",(float)array[n/2]);
	}
	return 0; 
}