#include <stdio.h>

int main(){
    double media = 0;
    int count = 0, x;

    for(;;){
        scanf("%d", &x);
        if(x < 0) break;
        media += x;
        count ++;
    }

    printf("%.2f\n", media / count);

    return 0;
}