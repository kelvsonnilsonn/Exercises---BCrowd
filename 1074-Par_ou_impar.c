#include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        printf((x == 0) ? "NULL\n" : ((x % 2 == 0) ? (x > 0 ? "EVEN POSITIVE\n" : "EVEN NEGATIVE\n") : (x > 0 ? "ODD POSITIVE\n" : "ODD NEGATIVE\n")));
    }

    return 0;
}