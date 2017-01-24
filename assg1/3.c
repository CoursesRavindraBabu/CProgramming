#include <stdio.h>
int main(int argc, char const *argv[])
{
	int C, D;
	printf("Enter C, D values respectively:\n");
	scanf("%d,%d",&C,&D);
	printf("Before swaping C=%d, D=%d",C,D);
	C = C + D;	// this will fail if the addition of two digits exceeds int range(>2^32 (if size of int is 32))
	D = C - D;	// D = C + D - D = C
	C = C - D;	// C = C + D - C = D
	/*
	C = C ^ D;	// best solution
	D = C ^ D;	// D = C ^ D ^ D = C
	C = C ^ D;	// C = C ^ D ^ C = D
	*/
	printf("After swaping C=%d, D=%d",C,D);
	return 0;
}