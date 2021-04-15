#include<stdio.h>

int main()
{
    int a,b,c,d;
printf("chose your Escape character \n ");
printf("a is for a which give us a normal windows sound \n");
printf("b is for backsash n if you want to print backslash n \n  ");
printf("c is for backslash t which give us the tab space/prints extra space \n");
printf("d is for print backslash \n");
scanf("%d", &a);
printf("producing sound \a \n");
scanf("%d", &b);
printf("printing backslash n \\n \n");
scanf("%d", &c);
printf("printing extra spaces between X,\t Y  \n");
scanf("%d", &d);
printf("printing backslash \\ \n");

return 0;
}