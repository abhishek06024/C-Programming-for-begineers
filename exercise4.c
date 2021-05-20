/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
void starpattern(int rows);
void squar(int rows, int type);
void rect(int rows, int type);
void reversstarpatern(int rows);
int main()
{
    int rows, type;

        // Code for printing a Reactangle with *
    // printf("enter the value of lenght \n");
    // scanf("%d", &rows);
    // printf("enter the value of bredth \n");
    // scanf("%d", &type);
    // rect(rows, type);

    // Code for printing Squar with *
    // printf("enter the value of lenght \n");
    // scanf("%d", &rows);
    // printf("enter the value of bredth \n");
    // scanf("%d", &type);
    // squar(rows, type);

    printf("Type 0 for triangular star pattern and 1 for reversed triangular star pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("You have selected Triangual star patren.\n Enter the value for your star patrens\n");
        scanf("%d", &rows);
        starpattern(rows);
        break;
    case 1:
        printf("You have selected Revese Triangual star patren.\n Enter the value for your star patrens\n");
        scanf("%d", &rows);
        reversstarpatern(rows);
        break;

    default:
        printf("You have entered the wrong choice\n");
        break;
    }

    return 0;
}

void starpattern(int rows)
{
    // This function will print star patren
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void reversstarpatern(int rows)
{
    // This function will print revers srar patren
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void rect(int rows, int type)
{
    // This function will print reactangle
    for (int i = 0; i < type; i++)
    {
        printf("\t");
        for (int j = 0; j <= rows * type; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void squar(int rows, int type)
{
    // This function will print squar
    for (int i = 0; i < type; i++)
    {
        printf("\t");
        for (int j = 0; j <= rows * 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}