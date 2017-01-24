#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	int count=0;
	printf("Enter ten digits in single line. each digit should be separeted by space\n");
	//0 1 0 0 1 0 0 1 0 0
	scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
	if(a1==0 && a1 == 1 && a2 == 0 && a3 == 0){
		count++;
	}else if(a2==0 && a3 == 1 && a4 == 0 && a5 == 0){
		count++;
	}else if(a3==0 && a4 == 1 && a5 == 0 && a6 == 0){
		count++;
	}else if(a4==0 && a5 == 1 && a6 == 0 && a7 == 0){
		count++;
	}else if(a5==0 && a6 == 1 && a7 == 0 && a8 == 0){
		count++;
	}else if(a6==0 && a7 == 1 && a8 == 0 && a9 == 0){
		count++;
	}else if(a7==0 && a8 == 1 && a9 == 0 && a10 == 0){
		count++;
	}
	printf("Number of time the pattern occured is:%d\n", count);
	return 0;
}