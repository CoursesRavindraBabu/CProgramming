#include <stdio.h>
#include <stdlib.h>
void remove_non_chars(char *str,int n){
	char *new_str=(char*)malloc(n*sizeof(char));
	int k=0;
	for(int i=0;i<n;i++){
		if((str[i] >= 'a' && str[i] <='z')||(str[i] >= 'A' && str[i] <='Z') || (str[i] >= '0' && str[i] <='9')){
			new_str[k++]=str[i];
		}
	}
	printf("After removal of non chars the new string is:%s\n",new_str);
}
int main(){
	char *str;
	int n;
	printf("Enter the length of string:\n");
	scanf("%d",&n);
	str=(char*)malloc(n*sizeof(char));
	printf("Enter string\n");
	scanf("%s",str);
	remove_non_chars(str,n);
	free(str);
	return 0;
}