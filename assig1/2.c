#include <stdio.h>
int main(){
	float pi=3.14;
	float l;
	printf("Enter the side of square\n");
	scanf("%f",&l);
	printf("The radius of circle is: %f\n", (2*l)/pi);
	printf("The area of circle is: %f\n",(4*l*l)/pi);
	return 0;
}