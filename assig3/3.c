#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long int fact(long int n){
	long int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	float x;
	float perv_sin,sin;
	long int k=1;
	printf("Enter value of x:\n");	
	scanf("%f",&x);
	sin=x;
	do{
		perv_sin=sin;
		printf("%f,%ld,%f\n",pow(-1,k),k,sin);
		sin += pow(-1,k) * ((pow(x,(2*k+1)))/fact(2*k+1));
		k++;
	}while(fabs(perv_sin-sin)>0.001);
	printf("The value of sin(%f) is : %f\n",x,sin);
}
