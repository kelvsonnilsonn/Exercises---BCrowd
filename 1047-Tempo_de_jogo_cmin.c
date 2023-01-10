#include <stdio.h>

int main(){

    int hi, mi, hf, mf, tmp;
    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);

    tmp = (hf * 60 + mf) - (hi * 60 + mi);
    if(tmp <= 0) tmp += 1440;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp / 60, tmp % 60);

    return 0;

}