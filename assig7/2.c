#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{	
	char *str=malloc(100*sizeof(char));
	strcpy(str,"wc ");
	strcat(str,argv[1]);
	if(argc>1){
		FILE *fp=fopen(argv[1],"r");
		if(fp!=NULL){
			system(str);
		}
		fclose(fp);
		
	}
	return 0;
}