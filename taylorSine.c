
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


//Write your TaylorSine function up here
//Remember to pay attention to type definitions for the function
//declaration and the function argument declarations

//You'll need to use the pow function, included by math.h
//Ex. int result = pow(base, exponent)
//int result = pow(2,3) , and so result = 2^3 = 8

//You'll also need your factorial function, so you can just copy that in
//BUT make sure to place it above the TaylorSine function
//Remember, since C is compiled, all functions must be defined before they
//are called in code elsewhere, and unlike Python, the C compiler doesn't
//look at all the function definitions before going into any of the function bodies



int main(int argc, const char *argv[]){
    //argc is the number of command-line arguments
    //argv is an array of strings, where each element is a given argument
    //Just as in Python, the first argument is automatically the name 
    //of the program itself
    if (argc < 3){
        printf("Too few arguments.  Must include angle and order as a command-line arguments \n");
        exit(0); //exit's the program completely
    }
    float theta = atof(argv[1]); //atof stands for ASCII to Float
    //Ie, it converts the string in argv[1] to a floating-point number
    
    int order = atoi(argv[2]); //atoi stands for ASCII to Int


    float sin_of_theta = TaylorSine(theta, order);


    printf("sin(%f) = %f , up to order %i corrections \n", theta, sin_of_theta, order);


    return 0;
}
