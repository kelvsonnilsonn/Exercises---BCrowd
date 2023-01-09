#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){ return (*(int*) a - *(int*) b); }

 
int main() {
 
    int chosen, numbers[3] = { 0 };
    
    for(int i = 0; i<3; i++){
        scanf("%d", &chosen);
        numbers[i] = chosen;
    }

    qsort(numbers, 3, sizeof(int), cmpfunc);
    printf("%d eh o maior", numbers[2]);

    return 0;
}