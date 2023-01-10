#include <stdio.h>

int main(){
    int start, end, count = 0;
    scanf("%d%d", &start, &end);

    for(int i=start; i<=24; i++, count++){
        if(i == 24) i = 0;
        if(i == end) break;
    }

    if(count == 0) count = 24;

    printf("O JOGO DUROU %d HORA(S)\n", count);

    return 0;
}