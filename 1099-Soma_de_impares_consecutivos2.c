#include <stdio.h>

int main(){
    int n, x, y, sum = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);

        if(x > y){
            for(int j = y + 1; j<x; j++){
                if(j % 2 == 1) sum += j;
            }
            if(sum > 0) printf("%d\n", sum);
            else printf("0\n");

        } else {
            for(int j = x + 1; j<y; j++){
                if(j % 2 == 1) sum += j;
            }
            if(sum > 0) printf("%d\n", sum);
            else printf("0\n");
        }
        sum = 0;
    }

    return 0;
}