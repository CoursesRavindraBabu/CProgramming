#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
     char *s[5], *t;
     printf("Enter any five strings : \n");
     for (int i = 0; i < 5; i++){
          int len;
          printf("Enter the number of char's in %dth string\n",i);
          scanf("%d",&len);
          s[i]=(char*)malloc(len*sizeof(char*));
          scanf("%s", s[i]);
     }
     for (int i = 1; i < 5; i++){
          for (int j = 1; j < 5; j++){
               if (strcmp(s[j - 1], s[j]) > 0) {
                    t=(char*)malloc(strlen(s[j-1])*sizeof(char));
                    strcpy(t, s[j - 1]);
                    strcpy(s[j - 1], s[j]);
                    strcpy(s[j], t);
                    free(t);
               }
          }
     }
     printf("Strings in order are : \n");
     for (int i = 0; i < 5; i++)
          printf("%s\n", s[i]);
     for (int i=0;i<5;i++)
          free(s[i]);
     return 0;
}