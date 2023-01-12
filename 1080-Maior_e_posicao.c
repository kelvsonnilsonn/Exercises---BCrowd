#include <stdio.h>

int main(){
    int a;
    int maior = 0, i;
    int nums[100] = { 0 };

    for(i=0; i<100; i++){
        scanf("%d", &a);
        if(a > maior) maior = a;
        nums[i] = a;
    }

    for(i=0; i<100; i++){
        if(maior == nums[i]) break;
    }

    printf("%d\n%d\n", maior, i+1);

    return 0;
}