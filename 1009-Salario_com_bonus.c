#include <stdio.h>
 
int main() {

    char name[20];
    double wage, sales;
    
    scanf("%s%lf%lf", &name, &wage, &sales);
    printf("TOTAL = R$ %.2f\n", wage + (0.15 * sales));
    
    return 0;
}