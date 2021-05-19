#include<stdio.h>

void main (){

int marks [10] = {1,2,3,4,5,6,7,8,9,10}; // This is an 1D array declaration with initialisation  
// marks[0]= 1;
// marks[1]= 2; // you can initialise array one by one like this 
printf("%d\n", marks[4]);
int nap [2][3] = {{1,2,3}, {4,5,6}}; // this is an 2D aray declaration with initialisation 
for (int i = 0; i < 2; i++)
{
    for(int j = 0; j < 3; j++){

    //    printf("The value of %d, %d array is  %d\n",i, j, nap[i][j]); // for printing array one by one 
       
        printf("%d ",nap[i][j] ); // for printing array in matrix form

    }
    printf("\n");// for printing array inmatrix form
}



    
}