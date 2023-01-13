#include <stdio.h>

int main(){
    int in = 0;
    double x, media;

    do{
        scanf("%lf", &x);
        if(x < 0 || x > 10){
            printf("nota invalida\n");
            continue;
        }
        media += x;
        in++;

    } while(in < 2);

    printf("media = %.2f\n", media / in);

    return 0;
}