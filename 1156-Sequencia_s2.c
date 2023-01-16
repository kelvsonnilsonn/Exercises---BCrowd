#include <stdio.h>

int main(){
    double s=0;
    for(double i=1, x = 1; x<=39; i *= 2, x += 2){
        s += x/i;
    }

    printf("%.2f\n", s);

    return 0;
}