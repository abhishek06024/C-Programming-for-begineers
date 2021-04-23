#include<stdio.h>

int main(){

// Goto statement is also known as jump statememt

// lable:
// printf("We are in lable\n");
// goto end;
// printf("Hello Word\n");

// end:
// printf("we are at end\n");
int num;

for(int i=0; i<9; i++){

printf("%d\n", i);
for (int j = 0; j < 9; j++)
{
    printf("Enter the number .Enter 0 to exit\n");
    scanf("%d", &num);
    if (num==0)
    {
        goto end;
    }
    
}


}

end:

    return 0;
}