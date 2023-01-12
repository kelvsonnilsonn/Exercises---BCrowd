#include <stdio.h>

int main(){
    int q = 0;
    for(float i=0; i<=2.2; i += 0.2, q+=0.2){
        for(float j=q+1; j<q+4; j++){
            if((i>0 && i<1) || (i>1 && i<2) || (i>2.1 && i<=2.2)){
                printf("I=%.1f J=%.1f\n", i, j+i);
            }
            else printf("I=%d J=%d\n", (int) i, (int) j + (int)i);
        }
    }
}