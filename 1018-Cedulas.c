#include <stdio.h>

int main(){
    int value, vf;
    int total[7] = { 0 };
    int cash[7] = { 100, 50, 20, 10, 5, 2, 1 };

    scanf("%d", &value);
    vf = value;

    for(int i = 0; i<7; i++){
        total[i] = value / cash[i];
        value %= cash[i];
    }

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", vf, total[0], total[1], total[2], total[3], total[4], total[5], total[6]);
    
    return 0;
}