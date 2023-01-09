#include <stdio.h>

int main(){
    int seconds;
    int time[3] = { 0 };
    int timers[3] = { 3600, 60, 1 };

    scanf("%d", &seconds);

    for(int i = 0; i<3; i++){
        time[i] = seconds / timers[i];
        seconds %= timers[i];
    }

    printf("%d:%d:%d\n", time[0], time[1], time[2]);

    return 0;
}