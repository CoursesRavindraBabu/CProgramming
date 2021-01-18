#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nrow,cnt,i=0,j=0,k=0;
    printf("Enter the no of rows in pascal that you want?");
    scanf("%d",&nrow);
    for(i=1;i<=nrow;i++)
    {
        for(j=0;j<nrow-i;j++)
        {
            printf(" ");
        }
        if(j==nrow-1){
            printf("1 \n");    
            }
        else{
            for(k=j;k<nrow-1;k++)
            {
                if(k==j)
                printf("1 ");
                if(k>j)
                {
                    printf("%d ",nrow-j-1);
                }
            }
            
           if(k==nrow-1)
             {printf("1 \n");} 
        }
        
        
    }
}
