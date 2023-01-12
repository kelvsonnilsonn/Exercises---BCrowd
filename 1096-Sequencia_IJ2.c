#include <stdio.h>

int main(){

    for(int i=1; i<=9; i+=2){
        for(int j=0, q=7; j<3; j++){
            printf("I=%d J=%d\n", i, q);
            q--;
        }
    }

    return 0;
}