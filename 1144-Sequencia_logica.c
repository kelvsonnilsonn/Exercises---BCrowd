#include <stdio.h>

int square(int a, int b){
    int total = 1;
    for(; b; b--){
        total *= a;
    }

    return total;
}
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d %d %d\n", i, square(i, 2), square(i, 3));
        printf("%d %d %d\n", i, square(i, 2) + 1, square(i, 3) + 1);
    }

    return 0;
}