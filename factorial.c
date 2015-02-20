
#include <stdlib.h>
#include <stdio.h>
//Analogous to import in Python

//Pay attention to type definitions for the function
//declaration and the function argument declarations

int factorial(int n){
    //your code here
    
    //replace this temporary return statement with your real one
    //when you're done writing your code
    return 0;
}



int main(int argc, const char *argv[]){
    //argc is the number of command-line arguments
    //argv is an array of strings, where each element is a given argument
    //Just as in Python, the first argument is automatically the name 
    //of the program itself
    if (argc < 2){
        printf("Too few arguments.  Must include a number as a command-line argument \n");
        exit(0); //exit's the program completely
    }
    
    int n = atoi(argv[1]); //atoi stands for ASCII to Int
    //Ie it converts the string in argv[1] to an integer

    int result = factorial(n);

    printf("%i! = %i \n", n, result);
    //the %i means it will insert the integer value from the next argument to printf
    //So the first %i is replaced with the value in n, and the second %i is replaced 
    //with the value in result


    return 0;
}
