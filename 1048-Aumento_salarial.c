#include <stdio.h>

int main(){
    double wage, new_wage;

    scanf("%lf", &wage);
    if(wage <= 400) new_wage = 1.15 * wage;
    else if(wage <= 800) new_wage = 1.12 * wage;
    else if(wage <= 1200) new_wage = 1.1 * wage;
    else if(wage <= 2000) new_wage = 1.07 * wage;
    else new_wage = 1.04 * wage;

    printf("Novo salario: %.2f\n", new_wage);
    printf("Reajuste ganho: %.2f\n", new_wage-wage);
    printf("Em percentual: %.0f %%\n", 100 * new_wage / wage - 100);

    return 0;
}