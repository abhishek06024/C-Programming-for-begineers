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
int main()
{
    int a;
    char c='*';
    char* b= &c;
    printf("Enter the value for star patrens");
    scanf("%d", &a);
    

    for (int i = 0; i < a; i++)
    {
       printf("%c\n",c);
       *b =  '*';
       printf("%c",e);
       
    }
    
    return 0;
}


