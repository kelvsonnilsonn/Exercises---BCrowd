#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<1000; i++) printf((i % n == 2) ? "%d\n" : "", i);
}