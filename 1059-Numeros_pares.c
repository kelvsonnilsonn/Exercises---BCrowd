#include <stdio.h>

int main(){
    for(int i=1; i<= 100; i++) printf((i % 2 == 0) ? "%d\n" : "", i);
    
    return 0;
}