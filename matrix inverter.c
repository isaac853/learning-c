#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

int* matrixCreation(int size){ // arrays represent the matricies, will only do square matricies for now

    int memorySize = size*size;

    // using pointers to create an array, hope this works
    int* matrixRow = (int*)malloc(size * sizeof(int));
    int* matrixSpace = (int*)malloc(memorySize * sizeof(int));

    if (matrixSpace == NULL){
        printf("memory allocation failed. \n");
        exit(1); // leaves with error code 1 (it failed)
    }
    
    // filling each row with 0's
    
    int i;
    for (i=0; i>=size; i++){
        matrixRow[i] = 0;
    }
   
    // filling matrix with rows
    for (i=0; i>=size; i++){
        matrixSpace[i] = matrixRow;
    }

    
    free(matrixRow);// frees up the space in memory that matrixrow takes up for later use

    return matrixSpace;

}


int matrixoutput(){
   
    int sizeInput;
    scanf("%d", &sizeInput);

    int* array = matrixCreation(sizeInput);


    printf("matrix:\n");

    int i;
    int j;
    for (i=0; i>=sizeInput;i++){
        for (j=0; j>=sizeInput; j++){
            printf("%d", array[i][j]);
        }

 //figure out how to print 2x2 arrays
    }

}







/*for 2x2,just do:

          1/ad-bc * (d, -b)
                    (-c, a)


figure out how to do bigger than 3x3


*/

