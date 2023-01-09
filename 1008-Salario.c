#include <stdio.h>

int main(){
    int id, hours;
    float hw;
    scanf("%d%d%f", &id, &hours, &hw);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, hours * hw);
    
    return 0;
}