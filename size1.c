#include <stdio.h>

int main()
{
    int a,b;

    a=0;
    b=2;

    // printf("a && b = %d\n",a && b ); // boothvalue should true
    // printf("a || b = %d\n",a || b ); // any one value shoule be true
    printf("a ! b = %d\n", !b ); // one value shoule be true and one value should be false
    
    
    
    return 0;
}