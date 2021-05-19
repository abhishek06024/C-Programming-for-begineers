#include<stdio.h>

void refrence (int *a, int *b);

 void main (){

     int a=9;
 int b =7;
 refrence(&a, &b);// calling function by refrence. It means giving the actual address of 
 printf("The value of a %d\n",a);
 printf("The value of b %d\n",b);

 }

void refrence (int *a, int *b)
{
    
    *a = *a+*b;
    *b = (*a-*b)-*b; 
}