#include <stdio.h>

int main(){
    int in, out;
    double x, media;

    do{
        in = 0;
        media = 0;
        do{
            scanf("%lf", &x);
            if(x < 0 || x > 10){
                printf("nota invalida\n");
                continue;
            }
            media += x;
            in++;

        } while(in < 2);

        printf("media = %.2f\n", media/2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &out);
        } while(out < 1 || out > 2);
    } while(out != 2);
}