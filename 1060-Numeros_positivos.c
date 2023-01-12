#include <stdio.h>

int main(){
    double a;
    int count = 0;

    for(int i=0; i<6; i++){
        scanf("%lf", &a);
        if(a > 0) count++;
    }

    printf("%d valores positivos\n", count);

    return 0;
}