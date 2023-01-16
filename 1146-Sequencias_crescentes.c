#include <stdio.h>

int main(){
    int n;
    
    do {
        scanf("%d", &n);
        for(int i = 1; i<=n; i++) printf((i == n) ? "%d\n" : "%d ", i);
    } while(n != 0);

    return 0;
}