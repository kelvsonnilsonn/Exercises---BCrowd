#include <stdio.h>

int main(){
    
    int total = 60;
    for(int i=1; total>=0; i+=3){
        printf("I=%d J=%d\n",i, total);
        total -=5;
    }
    
    return 0;
}