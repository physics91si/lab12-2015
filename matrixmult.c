
#include <stdlib.h>
#include <stdio.h>





int main(int argc, const char *argv[]){

    int mat1[10][10];
    int mat2[10][10];
    int result[10][10];
    //The matrices are 10 x 10


    FILE *fp = fopen("mat1.dat","r");
    for(int i = 0; i < 10; i++)
        fscanf(fp,"%i,%i,%i,%i,%i,%i,%i,%i,%i,%i", &mat1[i][0], &mat1[i][1], &mat1[i][2], &mat1[i][3], &mat1[i][4], &mat1[i][5], &mat1[i][6], &mat1[i][7], &mat1[i][8], &mat1[i][9]);

    
    fclose(fp);


    FILE *fp2 = fopen("mat2.dat","r");
    for(int i = 0; i < 10; i++)
        fscanf(fp2,"%i,%i,%i,%i,%i,%i,%i,%i,%i,%i", &mat2[i][0], &mat2[i][1], &mat2[i][2], &mat2[i][3], &mat2[i][4], &mat2[i][5], &mat2[i][6], &mat2[i][7], &mat2[i][8], &mat2[i][9]);

    
    fclose(fp2);

    //The code above serves to fill mat1 and mat2 with values by reading in from two files


    //Insert your code here to do mat1 x mat2
    //and set the result equal to result[][]
    //element-by-element


    printf("The final result is\n");
    for(int i = 0; i < 10; i++){
        printf("%4i , %4i, %4i , %4i , %4i , %4i , %4i , %4i , %4i , %4i \n", result[i][0] , result[i][1] , result[i][2], result[i][3], result[i][4], result[i][5], result[i][6], result[i][7], result[i][8], result[i][9] );
    }

    return 0;
}
