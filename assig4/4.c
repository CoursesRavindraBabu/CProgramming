#include <stdio.h>
#include <math.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	// int a[]={10,9,8,7,6,5,4,3,2,1};
	int n=10;
	int left=0, right=9,m;
	while(left<=right && right<10 && left>=0){
		m=floor((right+left)>>1);
		printf("%d\n",m );
		if(m>0 && m<10){
			if(a[m-1]<=a[m] && a[m]>=a[m+1]){
				printf("The peak value is:%d\n",a[m]);
				return 0;
			}else if(a[m-1]>a[m]){
				right=m-1;
			}else if(a[m-1]<a[m]){
				left=m+1;
			}			
		}else{
			break;
		}
	}
	printf("The peak value is:%d\n",a[m]);
	return 0;
}