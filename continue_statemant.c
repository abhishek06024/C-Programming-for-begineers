#include <stdio.h>

int main()
{


    int i, age;
    for(i=0; i<10; i++){
        printf("%d\nEnter your age\n", i );
        scanf("%d", &age);
        if (age>10){
            continue;
        }
        printf("we have not come across any continue statemrnt");
        printf("we have not come across any continue statemrnt");
        printf("we have not come across any continue statemrnt");
        printf(" This will executes when age is greater then 10\n");

    }

    return 0;
}