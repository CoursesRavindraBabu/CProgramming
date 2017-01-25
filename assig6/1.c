#include <stdio.h>
#include <string.h>
int main(){
	char str1[10];
	char str2[10];
	int a[26]={0};
	printf("Enter first string:\n");
	scanf("%s",str1);
	printf("Enter second string:\n");
	scanf("%s",str2);
	int str2_len=strlen(str2);
	for (int i = 0; i < str2_len; ++i){
		a[str2[i]-'a']=1;
	}
	int str1_len=strlen(str1);
	for (int i = 0; i < str1_len; ++i){
		if(a[str1[i]-'a']!=1){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}