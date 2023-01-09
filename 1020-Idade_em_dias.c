#include <stdio.h>

int main(){
    int total;
    int values[3] = { 0 };
    int timers[3] = { 365, 30, 1 };

    scanf("%d", &total);

    for(int i = 0; i<3; i++){
        values[i] = total / timers[i];
        total %= timers[i];
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", values[0], values[1], values[2]);

    return 0;
}