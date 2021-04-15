#include<stdio.h>
int main()
{
int input;
printf("Chose your Escape character \n  ");
printf("1 is for a which give us a normal windows sound \n");
printf("2 is for backsash n if you want to print backslash n \n  ");
printf("3 is for backslash t which give us the tab space/prints extra space \n");
printf("4 is for print backslash \n");

    scanf("%d", &input);
    if (input==1)
    {
        printf("producing sound \a \n");
    }
    else if (input==2)
    {
        printf("printing backslash n \\n \n");
    }
    else if(input==3)
    {
        printf("printing extra spaces between X,\t Y  \n");
    }
    else if(input==4)
    {
        printf("printing backslash \\ \n");
    }
    else 
    {
        printf("You have entered wrong choice \n");
    }
    
    

return 0;
}