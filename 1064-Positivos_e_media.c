#include <stdio.h>

int main(){
    double a, sum;
    int count = 0;

    for(int i=0; i<6; i++){
        scanf("%lf", &a);
        if(a > 0){
            count++;
            sum += a;
        }
    }
    printf("%d valores positivos\n%.1f\n", count, sum / count);

    return 0;
}