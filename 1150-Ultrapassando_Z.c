#include <stdio.h>

int main(){
    int x, y, total = 0, count=0;
    scanf("%d", &x);
    do{
        scanf("%d", &y);
    } while(y <= x);

    for(int i=x; total<=y; i++, count++){
        total += i;
    }

    printf("%d\n", count);

    return 0;
}