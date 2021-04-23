#include<stdio.h>

int takenumber(){
// This function is with No arguments and with return value.
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    return a;
}

int main(){

int b;
b = takenumber();
printf("The number entered is %d \n", b);

    return 0;
}