#include <stdio.h>
int main(){
	int n,count=0;
	printf("Enter value of n:\n");			
	scanf("%d",&n);
	while(n){
		int x = n & -n;
		if (x==1){
			count++;
		}
		n>>=1;
	}
	if(count!=1){
		printf("The given number is not power of two\n");
	}else{
		printf("The given number is power of two\n");
	}
}