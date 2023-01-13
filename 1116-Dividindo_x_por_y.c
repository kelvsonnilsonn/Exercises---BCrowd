#include <stdio.h>

int main(){

    int n;
    float x, y;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%f %f", &x, &y);

        printf((y == 0) ? (x / y ? "divisao impossivel\n" : "0.0\n") : "%.1f\n", x / y);
    }

    return 0;
}