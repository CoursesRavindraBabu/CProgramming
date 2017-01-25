#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int side;
	printf("Enter the coordinates of first vertex\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the coordinates of second vertex\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the coordinates of third vertex\n");
	scanf("%d%d",&x3,&y3);
	printf("Center of inner circle is: (%d,%d)\n",(x1+x2+x3)/3,(y1+y2+y3)/3);
	side= sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	printf("The area of inner circle is:%f\n", (sqrt(3) * side)/6);
	return 0;
	// we didn't check if the cordinates form triangle please include that check also
}