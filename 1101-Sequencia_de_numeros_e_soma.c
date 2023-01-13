#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, sum = 0, menor = 0, maior = 0;

    scanf("%d %d", &m, &n);
    if(m < n) {
        menor = m;
        maior = n;
    }
    else {
        menor = n;
        maior = m;
    }

    if((m == 0 || m < 0) || (n == 0 || n < 0)) exit(0);

    for(int i=menor; i<=maior; i++){
        sum += i;
    }

    for(int i=menor; i<=maior; i++){
        printf("%d ", i);
    }
    printf("Sum=%d\n", sum);
}