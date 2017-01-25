#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct box
{
	float l;
	float w;
	float h;
};
float max(struct box one_box){
	return (one_box.h>one_box.l)?((one_box.h>one_box.w)?one_box.h:one_box.w):((one_box.l>one_box.w)?one_box.l:one_box.w);
}

float find_maximum_height (struct box *box_array, int num_boxes){
	float sum=0.0;
	for (int i = 0; i < num_boxes; ++i){
		sum+=max(box_array[i]);
	}
	return sum;
}

int main(){
	FILE *fp=fopen("dimensions.txt","r");
	const size_t line_size = 100;
	char *line =malloc(line_size*sizeof(char));
	char *tok;
	int number_of_cubes;
	if(fgets(line, line_size, fp) != NULL){
		number_of_cubes=atoi(line);
	}
	struct box *box_ptr=malloc(number_of_cubes*sizeof(struct box));
	printf("%d\n",number_of_cubes );
	int i=0;
	while (fgets(line, line_size, fp) != NULL){
		tok=strtok(line," ");
		box_ptr[i].l=atof(tok);
		tok=strtok(NULL," ");
		box_ptr[i].w=atof(tok);
		tok=strtok(NULL," ");
		box_ptr[i++].h=atof(tok);
	}
	for (int i = 0; i < number_of_cubes; ++i){
		printf("length:%f,width:%f,height:%f\n",box_ptr[i].l,box_ptr[i].w,box_ptr[i].h);
	}
	printf("the maximum height of the arrangement is:%f\n",find_maximum_height(box_ptr,number_of_cubes));
	free(line);
	free(box_ptr);
	fclose(fp);
}