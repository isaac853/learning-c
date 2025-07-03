#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

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


    double** matrix = malloc(sizeof(double *) * size_col); //ask what double** means

        for(i=0; i<size_row; i++){
                matrix[i] = malloc(sizeof(double) * size_row);
                }


    printf("\nplease enter matrix values:\n");                
    for(i=0; i<size_col; i++){
        for(j=0; j<size_row; j++){

            scanf("%lf", &matrix[i][j]); //exception segmentation fault, for some reason size_row becomes 1077280768, 1074266112, 
            printf("stored thing \n");

        }
   }



    for(i=0; i<size_col; i++){
        for(j=0; j<size_row; j++){
            
            printf("%lf, ", matrix[i][j]);

        }
   }



    return matrix;
}




double** matrixInverter_2x2(double** matrix){

    // make a stagnant example matrix
    // ask how to free memory
    // ask for help with the whole not returning a double way
    //smack him if he says 'well you shouldn't be doing it like that'
   

    //create and define det_m
    // det_m = ad - bc 
    double det_m;
    det_m = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    printf("\n determinant: %lf \n",det_m);


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
    
    
    // free original matrix from memory(may be changed depending on how original matrix is used later)
    
    for(int i=0; i<2; i++){
        free(matrix[i]);

    }

    free(matrix);

    return inverted_matrix;
}


int main(){

    // make defining n and m their own functions then pass them into matrixmaker so they can be reused later

    int size_col = size_n();
    int size_row = size_m();

    double** matrix = matrixmaker_nxm(size_col, size_row);
    double** inverted_matrix = matrixInverter_2x2(matrix);
    


    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            printf("%lf, ",inverted_matrix[i][j]);
        }

    }


    return 0;
}
