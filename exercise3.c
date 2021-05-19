#include<stdio.h>

int fabo (int n);

int main (){

int num;
printf("enter the value for  febonacci serries\n");
scanf("%d", &num);
printf("%d\n", fabo(num)); 
   
   
    /* printing fibonacci seris with iterativee aproch 
    NOTE:- Iterative aproch takes lesser time to print fibonacci series from 
    Recursive function*/
int a,b,c,d;
a=0, b=1, d=0;
printf("%d", d);
for (int i = 1; i < num; i++)
{
    c=a+b;
    a=b;
    b=c;
    printf(" %d", c); // answer will be 267914296
}


    return 0;
}

int fabo (int n){
    // printing fibonacci seris with recursive function

    if (n==0||n==1)
    {
        return n;
    }

    else 
        return (fabo(n-1)+fabo(n-2));
    
}