#include <stdio.h>

int main(){
    int x, y;

    while(1){
        scanf("%d %d", &x, &y);
        if(x == 0 || y == 0) break;
        printf((x > 0) ? (y >0 ? "primeiro\n" : "quarto\n") : (y > 0 ? "segundo\n" : "terceiro\n"));
    }

    return 0;
}