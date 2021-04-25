#include <stdio.h>
int calcu(int num);
int main()
{
    int num;
    float value ,miles, foot, inch, kgs, meters,Fhight,cel;
label:
    printf("This program is unit converter.\n ");
    printf("1 ia for Killometers to miles\n");
    printf("2 ia for Inches to foot\n");
    printf("3 ia for Centimeters to Inches\n");
    printf("4 ia for Pound to Kilograms\n");
    printf("5 ia for Inches to Meters\n");
    printf("6 ia for Celcious to Farenhight\n");
    printf("7 ia for Farenheight to Celcious \n");
    printf("0 ia for Quit\n");
    scanf("%d", &num);
    if (num > 7 || num < 0)
    {

        printf("You have entered a wrong choice try again. \n");
        goto label;
    }
    else if (num == 0)
    {
        goto end;
    }
    else if (num == 1)
    {
        printf("Enter the value of Killometers\n");
        scanf("%f", &value);
        miles = value*0.62137;
        printf("The %.2f = %.5f\n", value, miles);
        goto label;
    }
    else if (num == 2)
    {
         printf("Enter the value of Foot\n");
        scanf("%f", &value);
        foot = value/12;
        printf("The %.2f = %.5f\n", value,foot);
        goto label;
    }
    else if (num == 3)
    {
        printf("Enter the value of Centimeters\n");
        scanf("%f", &value);
        inch = 0.3937 * value;
        printf("The %.2f = %.5f\n", value,inch);
        goto label;
    }
    else if (num == 4)
    {
       printf("Enter the value of Pound\n");
        scanf("%f", &value);
        kgs = value/2.20462;
        printf("The %.2f = %.5f\n", value,kgs);
        goto label;
    }
    else if (num == 5)
    {
        printf("Enter the value of Inches\n");
        scanf("%f", &value);
        meters = value*0.0254;
        printf("The %.2f = %.4f\n", value,meters);
        goto label;
    }
    else if (num == 6)
    {
        printf("Enter the value of Celcious \n");
        scanf("%f", &value);
        Fhight = ((value*9)/5)+32;
        printf("The %.2f = %.1f\n", value,Fhight);
        goto label;
    }
    else if (num == 7)
    {
        printf("Enter the value of Celcious \n");
        scanf("%f", &value);
        cel = (value-32)*5/9;
        printf("The %.2f = %.2f\n", value,cel);
        goto label;
    }

end:
    return 0;
}

int calcu(int num)
{
    printf(" choices");
}