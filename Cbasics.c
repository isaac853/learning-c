#include <stdio.h> //this is a header file library, i think they are like imports in python. this lets you run printf commantds
#include <stdbool.h>// booleans
#include <string.h>//string functions

// everything goes into a function called main, 
int main() { 
  printf("Hello World!\n"); //every c statement ends with a ;
 
  int five = 5, four = 4; 
  const char letter = 'D'; // integer characters will be translated via ascii and vice versa, constant variables should be done in full caps as good practice 

  float flt = 6.44e4;// e is just a way of writing to x10^whatever
  double dbl = 3.22;  // a double has 8bits vs the 4 bits of a flt, so can hold larger numbers, but takes twice the space

   five += 1;

  printf("%d\n", five); //to output variables, you have to specify the format, %d is used for integers, %f for floats, %c for characters

  printf("number: %d, and char: %c\n",five,letter); 

  printf("%d %d %c \n ", five, four, letter); // it seems that the values in five, four and letter are subbed into each %d and %c

  printf("%lu %lu \n",sizeof(flt), sizeof(dbl)); // %lu is long unasigned integer

  printf("%.1f \n", flt);// float to one decimal place

  printf("%.2f \n", (float)five);

  if (5==5) {
    printf("20\n\n");
  }

  int count = 0;


  while (true){
    printf("loop\n");
    count ++;

    if (count == 5){
      break;
    }
  
  }


  do { // will run the loop once before checking whether the condition is fufilled
  printf("cheese\n\n");
  }
  while (false);


  int i;
  for (i=0; i<5; i++){ 
    
    /*i=0 is run once before the first loop runs, to initially set i
      i<5 is checked every time before each loop, if true, the loop keeps going
      i++ is run at the end of every loop (increment i by 1)
    */

    if (i == 2){
      continue;// skips to the next loop when i == 2
    }

    printf("%d \n", i);
    
  
  }


  int array[] = {1,2,3,4,5,6,7,8,9,0};

  printf("%d \n", array[0]);

  int presetSizeArray[10];

  presetSizeArray[2] = 2;

  printf("%lu \n", sizeof(presetSizeArray)); // returbs 40 as ints take up 4 bits each, and the array has 10 int slots

  int lengthOfArray = sizeof(presetSizeArray) / sizeof(presetSizeArray[2]); //you can get the length of the array by dividing the total size by the size of each unit, this is useful in for loops


char yoskebroske[] = "wazzuh!";// c does not have strings as a data type, only arrays of characters like so


printf("%s \n",yoskebroske);

printf("%c \n",yoskebroske[2]);

char otherString[] = "what is happening my \"dudes\""; // to use special characters without blowing up the universe, use a reverse slash

printf("%lu \n", strlen(yoskebroske));



strcat(yoskebroske, otherString); //concatenates otherstring onto yoskebroske

yoskebroske[1] = 'u'; // very important to use single quotes

strcmp(yoskebroske, otherString); //compares two strings, if they are the same, returns a 0, does not otherwise

strcpy(yoskebroske, otherString);//copies otherstring onto yoskebroske

char aChar;
int anInt;
scanf("%d %c", &anInt, &aChar);// allows a user input for a number followed by a characater

char firstname[30];

scanf("%s", &firstname); // can't be longer than 30 characters

// & symbol is used to reference the location of a variable

printf("%p \n", &aChar);//hex form of memory adress

int randint = 45;
int* ptr = &randint; // the * is called the dereference operator and is used to make a pointer variable


  // these end the function file thing as far as i cant tell, returning a zero means the file ran without error
  return 0;
}

