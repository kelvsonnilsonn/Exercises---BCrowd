#include <stdio.h>

int main(){
    double vm, dt;
    scanf("%lf%lf", &vm, &dt);
    printf("%.3f\n", vm * dt / 12);

    return 0;
}