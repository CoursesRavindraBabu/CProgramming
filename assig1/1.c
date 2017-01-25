#include <stdio.h>
int main(){
	int a, d, n,nth_term;
	printf("Enter values 'a', 'd', 'n' respectively\n");
	scanf("%d%d%d",&a,&d,&n);
	nth_term = a+(n-1)*d;
	printf("%dth term is : %d\n",n,nth_term);
	printf("Sum up to %dth term is: %d\n",n, (n*(a+nth_term))/2);
	return 0;
}