#include <stdio.h>
//
int main(){
    double wage;

    scanf("%lf", &wage);

    if(wage <= 2000) printf("Isento\n");
    else if(wage <= 3000) printf("R$ %.2f\n", (wage - 2000) * 0.08);
    else if(wage <= 4500) printf("R$ %.2f\n", (wage - 3000) * 0.18 + 1000 * 0.08);
    else printf("R$ %.2f\n", (wage - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08);

    return 0;
}