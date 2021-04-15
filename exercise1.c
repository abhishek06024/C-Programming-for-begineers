#include<stdio.h>
int main()
{

/* Print multiplicaton of a number entered by a user in preety form
Example:

Input
Enter the number you want multiplication of:
like: 6or7etc.

Output:
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18 
.
.
.
.
6 X 10 = 60
*/

int a, num=0, sum;

printf("Enter the number you want multiplacation of :");
scanf("%d", &a);



    do
    {
        num++;
        sum=a*num;
        printf(" %d ", a );
        printf("x %d",num );
        printf("= %d\n", sum);
        
        
    } while (num<10);
    

    return 0;
}