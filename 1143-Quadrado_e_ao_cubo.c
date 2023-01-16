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
    int matriz[n][3];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            matriz[i - 1][j - 1] = square(i, j);
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d %d %d\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    return 0;
}