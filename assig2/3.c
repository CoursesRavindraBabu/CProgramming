#include <stdio.h>
#include <stdlib.h>
int main(){
	int a=1+rand()%11;
	if(a<3){
		printf("a\n");
	}else if(a<6){
		printf("b\n");
	}else if(a<9){
		printf("c\n");
	}else{
		printf("d\n");
	}
	return 0;
}