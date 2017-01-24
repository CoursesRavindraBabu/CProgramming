#include <stdio.h>
int main(){
	int a,b,c;
	int min,max;
	printf("Enter three numbers a,b,c :\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b?(a>c)?a:c):(b>c)?b:c;
	min=(a>b?(b>c)?c:b):(a>c)?c:a;
	printf("The maximum of given 3 numbers is:%d\n",max);
	printf("The minimum of given 3 numbers is:%d\n",min);
	return 0;
}