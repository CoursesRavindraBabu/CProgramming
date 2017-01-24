#include <stdio.h>
int main(){
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int slop_ab,slop_bc;
	printf("Enter the coordinates of first vertex\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the coordinates of second vertex\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the coordinates of third vertex\n");
	scanf("%d%d",&x3,&y3);
	slop_ab= (y2-y1)/(x2-x1);
	slop_bc= (y3-y2)/(x3-x2);
	if(slop_ab==slop_bc){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}	