#include <stdio.h>

int main(){
    int x, y;
    int matriz[50] = { 0 };

    scanf("%d%d", &x, &y);

    if(x > y){
        for(int i=y + 1; i<x; i++){
            printf((i % 5 == 2 || i % 5 == 3) ? "%d\n" : "", i);
        }
    } else {
        for(int i=x + 1; i<y; i++){
            printf((i % 5 == 2 || i % 5 == 3) ? "%d\n" : "", i);
        }
    }

    return 0;
}