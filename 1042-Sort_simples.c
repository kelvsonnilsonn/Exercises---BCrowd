#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b){ return (*(int*) a - *(int*) b); }

int main(){
    int a, b, c;
    int chosen[3] = { 0 };
    int sorted[3] = { 0 };

    for(int i = 0; i<3; i++){
        scanf("%d", &a);
        chosen[i] = a;
        sorted[i] = a;
    }

    qsort(sorted, 3, sizeof(int), cmp);

    printf("%d\n%d\n%d\n", sorted[0], sorted[1], sorted[2]);
    printf("%d\n%d\n%d\n", chosen[0], chosen[1], chosen[2]);


    return 0;
}