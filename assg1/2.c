#include <stdio.h>
int main(){
	float pi=3.14;
	float l;
	printf("Enter the side of circle\n");
	scanf("%ld",&l);
	printf("The radius of circle is: %ld\n", (2*l)/pi);
	printf("The area of circle is: %ld\n",(4*l*l)/pi);
	return 0;
}