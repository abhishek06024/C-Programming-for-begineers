#include <stdio.h>

int main()
{

    // we can also use break statements with Loops also 

    int i, age;
    for(i=0; i<10; i++){
        printf("%d\nEnter your age\n", i );
        scanf("%d", &age);
        if (age>10)
        {
            break;
        }
    }

    return 0;
}