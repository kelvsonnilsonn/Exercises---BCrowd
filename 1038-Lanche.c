#include <stdio.h>

int main(){
    float produtos[5] = { 4, 4.5, 5, 2, 1.5 };
    int id, quantidade;

    scanf("%d%d", &id, &quantidade);

    printf("Total: R$ %.2f\n", produtos[id - 1] * quantidade);
    
    return 0;
}