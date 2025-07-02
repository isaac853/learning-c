#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

double matrixmaker_nxm(){
    int size_col, size_row, i, j;


    printf("column size: \n");
    scanf("%d", &size_col);

    printf("row size: \n");
    scanf("%d", &size_row);

    double **matrix = malloc(sizeof(int *) * size_col); //ask what double** means

    for(i=0; i<size_row; i++){
        matrix[i] = malloc(sizeof(double) * size_row);
    }

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

int matrixInverter_2x2(matrix){

    // make a stagnant example matrix
    // ask how to free memory
    // ask for help with the whole not returning a double way
    //smack him if he says 'well you shouldn't be doing it like that'


    int det_m;
    // det_m = ad - bc

    det_m = (matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]);



    return 0;
}


int main(){

    matrixmaker_nxm();
    
    return 0;
}
