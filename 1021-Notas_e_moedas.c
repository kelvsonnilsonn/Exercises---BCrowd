#include <stdio.h>

int main(){
    double value;
    int total_cash, total_cents;
    int total[12] = { 0 };
    int cash[6] = { 100, 50, 20, 10, 5, 2 };
    int cents[6] = { 100, 50, 25, 10, 5, 1 };

    scanf("%lf", &value);

    total_cash = (int) value;
    total_cents = (value - total_cash) * 100;

    for(int i = 0; i<6; i++){
        total[i] = total_cash / cash[i];
        total_cash %= cash[i];
    }

    total_cents += total_cash * 100;

    for(int j = 0; j<6; j++){
        total[j+6] = total_cents / cents[j];
        total_cents %= cents[j];
    }

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", total[0], total[1], total[2], total[3], total[4], total[5]);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", total[6], total[7], total[8], total[9], total[10], total[11]);

    return 0;
}