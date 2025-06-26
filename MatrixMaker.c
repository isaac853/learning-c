#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

int matrixmaker_nxm(){
    int size_col;
    int size_row;


    printf("column size: \n");
    scanf("%d", &size_col);

    printf("row size: \n");
    scanf("%d", &size_row);

    double matrix[size_col][size_row];

    int i;
    int j;

    for( i=0; i >= (size_col - 1); i++ ){
        for( j=0; j >= (size_row - 1); i++ ){
            
            scanf("%lf", &matrix[i][j]);

        }
   }


    for( i=0; i >= (size_col - 1); i++ ){
        for( j=0; j >= (size_row - 1); i++ ){
            
            printf("%lf", matrix[i][j]);

        }
   }

    return 0;
}




int main(){

    matrixmaker_nxm();
    
    return 0;
}
