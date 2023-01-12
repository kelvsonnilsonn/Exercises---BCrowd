#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    
    if(x % 2 ==0){
        for(int i = x; i <= (x+12); i++){
            printf((i % 2 == 1) ? "%d\n" : "", i);
        }  
    } else {
        for(int i = x; i <= (x+11); i++){
            printf((i % 2 == 1) ? "%d\n" : "", i);
        }
    }

    return 0;
}