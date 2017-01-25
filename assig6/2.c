#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int *a;
	int sum=0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter n integers:\n");
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("The avg of given %d numbers is:%f\n", n,(float)sum/n);
	free(a);
	return 0;
}