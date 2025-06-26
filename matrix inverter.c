#include <stdio.h> // lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions
#include <stdlib.h>// allows memory allocation

// int* matrixCreation(int size){ // arrays represent the matricies, will only do square matricies for now

//     int memorySize = size*size;

//     // using pointers to create an array, hope this works
//     int* matrixRow = (int*)malloc(size * sizeof(int));
//     int* matrixSpace = (int*)malloc(memorySize * sizeof(int));

//     if (matrixSpace == NULL){
//         printf("memory allocation failed. \n");
//         exit(1); // leaves with error code 1 (it failed)
//     }
    
//     // filling each row with 0's
    
//     int i;
//     for (i=0; i>=size; i++){
//         matrixRow[i] = 0;
//     }
   
//     // filling matrix with rows
//     for (i=0; i>=size; i++){
//         matrixSpace[i] = matrixRow;
//     }

    
//     free(matrixRow);// frees up the space in memory that matrixrow takes up for later use

//     return matrixSpace;

// }


// int matrixoutput(){
   
//     int sizeInput;
//     scanf("%d", &sizeInput);

//     int* array = matrixCreation(sizeInput);


//     printf("matrix:\n");

//     int i;
//     int j;
//     for (i=0; i>=sizeInput;i++){
//         for (j=0; j>=sizeInput; j++){
//             printf("%d", array[i][j]);
//         }

//  //figure out how to print 2x2 arrays
//     }

// }



// typedef unsigned int ui;

// typedef struct matrix_d_2x2 {
//     double data[2][2];
// } matrix_d_2x2_t ;

// void fish(ui x, ui y) {

// }

// void carp(struct matrix_d_2x2 a) {
//     a.data[1][2] = 1234.0;
// }

// void haddock(matrix_d_2x2_t a) {
//     a.data[1][2] = 1234.0;
// }

// // 1) Structs have a fixed size at compile time
// //typedef struct matrix_d_nxm {
// //    double data[n][m];
// //} matrix_d_2x2_t ;

// // Option 1 - Use a macro to create the matix you want at compile time (FAST at runtime)
// // Option 2 - Use dynamic memory allocation for the data part of the structure and keep a reference to it in the struct (FLEXIBLE at runtime).
// // malloc and free are SLOW

// // int, long are integers
// // float, double are floating point numbers


// void matrix_dyn_nxm_init(
//     matrix_dyn_nxm_t *matrix,
//     size_t n,
//     size_t m
// ) {
//     matrix->n = m;
    
//     // Isaac, do the other size and allocate (malloc) some memory for the data!
// }

// void matrix_dyn_nxm_init(
//     matrix_dyn_nxm_t *matrix,
//     size_t i,
//     size_t j,
//     double v
// ) {
//   // TODO
// }


// // Ha ha ha ha ha ha ha - C refers to struct members in 2 ways! 
// // If your variable IS the structure use the . operator
// // If your variable is a POINTER use the -> operator
// // If your variable is a reference use the . operator (HAH HAH HA HA HA)
// //
// // To make it funnier, there no ambiguity at all, so the only purpose of this is so the compiler can not compile your program!
// //


typedef struct matrix_dyn_nxm { // this is definining a type that is a structure that contains useful variables with the alias matrix_dyn_nxm_t
    size_t n; // size_t is probably just 'unsigned int'
    size_t m;
    double *data;
} matrix_dyn_nxm_t ;

void car() {
    matrix_dyn_nxm_t m1;
    m1.m = 2;
    m1.n = 2;
    m1.data = 1;
}


typedef unsigned int ui; // typedef basically makes slang for data types so you can call them with whatever phrase you want

typedef struct matrix_d_2x2 {
    double data[2][2];

} matrix_d_2x2_t ; // why is this here and what does it do



void matrix_dyn_nxm_init(matrix_dyn_nxm_t *matrix,    size_t i,    size_t j,    double v) { // a member of the dynamic matrix structure that i made with the pointer 
    

}

    // TODO




