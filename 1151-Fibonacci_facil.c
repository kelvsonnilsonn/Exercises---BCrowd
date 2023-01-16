#include <stdio.h>

int main(){

    int n, a = 0, num = 1, s;
    scanf("%d", &n);

    if(n > 1){
        printf("%d ", a);
        for(int i=2; i<n + 1; i++){
            printf((i == n) ? "%d\n" : "%d ", num); 
            s = a + num; // s = 0 + 1  -> s = 1 + 1
            a = num; // a = 1   -> a = 1
            num = s; // num = 1 -> num = 2
        }
    }

    return 0;
}