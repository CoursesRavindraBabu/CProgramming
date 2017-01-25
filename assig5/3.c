#include<stdio.h>
int OrthoNormal(int N,float product[][N]){
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            if(i==j && product[i][j]!=1){
                return 0;
            }else if(i!=j && product[i][j]!=0){
                return 0;
            }
        }
    }
    return 1;
}
void product_of(int N,float A[][N],float AT[][N],float product[][N]){
    int sum=0;
    for ( int i = 0 ; i < N ; i++ ){
        for (int j = 0 ; j < N ; j++ ){
            for (int k = 0 ; k < N ; k++ ){
                sum = sum + A[i][k] * AT[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
}
void matTranspose(int N,float A[][N],float AT[][N]){
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            AT[j][i]=A[i][j];
        }
    }
}
void print_matrix(int N,float A[][N]){
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            printf("%f\t", A[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int N=3;
    float A[][3]={
                {1,2,3},
                {3,4,5},
                {5,6,7}
                };
    float AT[N][N],product[N][N];
    
    printf("Matrix A is:\n");
    print_matrix(N,A);
    
    matTranspose(N,A,AT);
    printf("Transpose of matrix A is:\n");
    print_matrix(N,AT);
    
    product_of(N,A,AT,product);
    printf("Product of A and AT is:\n");
    print_matrix(N,product);

    if(OrthoNormal(N,product)){
        printf("Matrix is orthogonal.\n");
    }else{
        printf("Matrix is not orthogonal.\n");        
    }
}