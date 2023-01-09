#include <stdio.h>

int main(){
    int distance;
    double liter;

    scanf("%d%lf", &distance, &liter);
    printf("%.3f km/l\n", distance/liter);

    return 0;
}