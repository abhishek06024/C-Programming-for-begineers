#include <stdio.h>

void main()
{
    /* & is a address/refrence operator which contain the address of any variable 
    if ankit lives in majra so &ankit is majra or if we stores 10 in a 
    and in memory the address of a is like 0x45A1 so &a = 0x45A1 not 10
                                Or
    * is Dereference operatop/indirectiom operator it is used to print the 
    value of variable which pointer is pointing like in upper example 
    if a stores 10 and ger ox45A1 address in meromy *a=10  */

int a=10;
int *ptra = &a; // creating an pointer ptra and storing the address of a in it
printf("The address of pointer to a is %p\n", &ptra);
printf("The address of a is %p\n", ptra);
printf("The address of a is %p\n", &a);
printf("The value of a is %d\n", a);
printf("The value of a is %d\n", *ptra);

}