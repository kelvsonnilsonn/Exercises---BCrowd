#include <stdio.h>

int main(){
    int id, amount;
    double value, total = 0;

    for(int i=0; i<2; i++){
        scanf("%d%d%lf", &id, &amount, &value);
        total += amount * value;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}