#include <stdio.h>

int main(){

    int q=7;

    for(int i=1; i<=9; i+=2){
        for(int j=0, q1 = q; j<3; j++){
            printf("I=%d J=%d\n", i, q1);
            q1--;
        }
        q += 2;
    }

    return 0;
}