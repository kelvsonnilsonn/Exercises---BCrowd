#include <stdio.h>
int main(){
    int x, n, b=0;
    scanf("%d", &x);

    do{
         scanf("%d", &n);
    } while( n <= 0 );

    for(int i=0; i<n; i++){
        b += x + i; // b = 3 + 0 -> b = 3 + 0 + 3 + 1;
    }

    printf("%d\n",b);
    
    return 0;
}