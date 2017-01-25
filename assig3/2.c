#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,sum=0;
	printf("Enter the positive number\n");
	scanf("%d",&n);
	while(n){
		sum+=n%10;
		n/=10;
	}
	printf("Sum of digits is:%d\n", sum);
	return 0;
}