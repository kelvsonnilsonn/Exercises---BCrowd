#include <stdio.h>

int main(){
    int nl, nc;
    static int num = 1;

    scanf("%d%d", &nl, &nc);

    for( ;num < nc;){
        for(int j=1; j<=nl; j++, num++){
            printf((j == nl) ? "%d\n" : "%d ", num);
        }
    }

    return 0;
}