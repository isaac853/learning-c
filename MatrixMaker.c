#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

void nxm_output(double** matrix, int size_col, int size_row){  
    
    printf("\n│");

    for(int i=0; i<size_row; i++){
        for(int j=0; j<size_col; j++){
            
            if (matrix[i][j] < 0){
                printf("%lf,",matrix[i][j]);
            }

            else{
                printf(" %lf,",matrix[i][j]);
            }

            if(j != 0){
                if (j%(size_row-1) ==0 && i != size_row-1){
                    printf("│\n│");
                }

                if(j%(size_row-1) ==0 && i == size_row-1){
                    printf("│\n");
                }
            
            }   
        }
    }
    

}

void memoryfree_nxm(double** matrix, int size_row){ 
    // i do not know if this frees the original, or creates a copy then frees that copy TODO check with phillip 
    
    for(int i=0; i<size_row; i++){
        free(matrix[i]);
        }

    free(matrix);

}

int size_n(){
    int size_col;

    printf("column size: \n");
    scanf("%d", &size_col);

    return size_col;
}

int size_m(){
    int size_row;

    printf("row size: \n");
    scanf("%d", &size_row);

    return size_row;
}

double** matrixmaker_nxm(int size_col, int size_row){
    int i, j;


    double** matrix = malloc(sizeof(double *) * size_col);

        for(i=0; i<size_row; i++){
                matrix[i] = malloc(sizeof(double) * size_row);
                }


    printf("\nplease enter matrix values:\n");                
    for(i=0; i<size_col; i++){
        for(j=0; j<size_row; j++){
            
            printf("[%d][%d]\n", i, j);
            scanf("%lf", &matrix[i][j]);
            printf("value stored \n");

        }
   }

    return matrix;
}

double** matrixInverter_2x2(double** matrix){
    //create and define det_m
    // det_m = ad - bc 
    double det_m;
    det_m = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    printf("\ndeterminant: %lf \n",det_m);

    if(det_m == 0){
        printf("\nmatrix has no inverse\n");

        return false;

    }

    //create and define the inverted matrix

    double** inverted_matrix = malloc(sizeof(double *) * 2); //ask what double** means

    for(int i=0; i<2; i++){
        inverted_matrix[i] = malloc(sizeof(double) * 2);
        }

    inverted_matrix[0][0] = matrix[1][1];
    inverted_matrix[0][1] = matrix[0][1]* -1;
    inverted_matrix[1][0] = matrix[1][0]* -1;
    inverted_matrix[1][1] = matrix[0][0];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            
            inverted_matrix[i][j] *= (1/det_m);

        }
    }
    return inverted_matrix;
}

int main(){

    int size_col = size_n();
    int size_row = size_m();

    double** matrix = matrixmaker_nxm(size_col, size_row);
    
    nxm_output(matrix, size_col, size_row);
    
    double** inverted_matrix = matrixInverter_2x2(matrix);
    
    if(!inverted_matrix){
        return 1;
    }
    
    memoryfree_nxm(matrix, size_row);

    nxm_output(inverted_matrix, size_col, size_row);

    return 0;
}
