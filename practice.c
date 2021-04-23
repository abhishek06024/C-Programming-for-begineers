#include<stdio.h>

int main()
{
    // This programe is created to solve 2x2 Determinant 
    
    int c1,c2,c3, c4, delta, delta1, delta2, x, y, rx, ry;

    printf("Enter the value of Row 1 like c1 or c2\n");
    scanf("%d %d", &c1, &c2);
    printf("Enter the value of Row 2 like c3 or c4\n");
    scanf("%d %d", &c3, &c4);
    printf("Enter the value of both deltas which is in right side/after =\n");
    scanf("%d %d", &rx, &ry);
        delta = (c1*c4)-(c3*c2);
        delta1 = (rx*c4)-(ry*c2);
        delta2 = (c1*ry)-(c3*rx);
        x = delta1/delta;
        y = delta2/delta;

        printf("Now printing the answers of 2X2 Determinant\n");
        printf("The value of Delta =  %d\n", delta);
        printf("The value of Delta1 = %d\n", delta1);
        printf("The value of Delta2 = %d\n", delta2);
        printf("The value of x =  %d\n", x);
        printf("The value of y = %d\n", y);


    return 0;
}
