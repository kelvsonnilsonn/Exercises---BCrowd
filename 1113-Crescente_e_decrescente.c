#include <stdio.h>

int main(){
    int x, y;

    for(int i=0; i<100; i++){
        scanf("%d %d", &x, &y);

        printf((x == y ) ? "" : (x > y ? "Decrescente\n" : "Crescente\n"));
    }

    return 0;
}