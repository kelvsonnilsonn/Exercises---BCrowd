#include <stdio.h>

int main(){
    int n;
    static int j = 1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int p=1; p<=4 ; p++, j++){
            printf((p == 4) ? "PUM\n" : "%d ", j);
        }
    }

    return 0;
}