#include<stdio.h>
// unction is also knnown as Procedure or subrotine
//If you want to write your function after main function just Declare the function and 
// Write your finction anywher/after main function.
int sum (int a, int b ); //Declaration of function
int main(){

    int a, b, c;
    a = 5;
    b = 6;
    c = sum (a, b);  // Calling of function with parameters

    printf("%d\n", c);

    return 0;
}

int sum (int a, int b ){
    // This function is with aruments and with retun value


    return a+b;
}

