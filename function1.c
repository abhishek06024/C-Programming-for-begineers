#include<stdio.h>

void printstar (int n){

    //this function is with arguments and with no return value

    for(int i = 0; i < n; i++){
        printf("%c", '*');
    }
}

int main(){

  
 printstar(7);

    return 0;

}