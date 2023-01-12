#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        printf((i % 2 == 1) ? "%d\n" : "", i);
    }
    
    return 0;
}