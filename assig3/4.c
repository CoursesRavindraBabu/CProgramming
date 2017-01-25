#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	for (int i = 0; i <= n; ++i){
		int a=5*i*i+4;
		int b=5*i*i-4;
		int sqrt_a=sqrt(a);
		int sqrt_b=sqrt(b);
		if(!(sqrt_a*sqrt_a==a || sqrt_b*sqrt_b==b)){
			printf("%d\n",i);
		}
	}
}