#include <stdio.h>
int main()
{

    int num;

    printf("Enter any week day number \n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf(" Sunday = %d\n", num);
        break;
    case 2:
        printf(" Monday = %d\n", num);
        break;
    case 3:
        printf(" Tuesday = %d\n", num);
        break;
    case 4:
        printf(" Wednesday = %d\n", num);
        break;
    case 5:
        printf(" Thursday = %d\n", num);
        break;
    case 6:
        printf(" Friday= %d\n", num);
        break;
    case 7:
        printf(" Saturday = %d\n", num);
        break;

    default: 
    printf("Pleas enter number between 1 to 7\n");
        break;
    }

    return 0;
}