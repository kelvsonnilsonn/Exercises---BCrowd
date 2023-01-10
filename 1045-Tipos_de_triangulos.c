#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) { return -(*(double*) a - *(double*) b); }

int main(){
    double a;
    double l[3] = { 0 };

    for(int i=0; i<3; i++){
        scanf("%lf", &a);
        l[i] = a;
    }

    qsort(l, 3, sizeof(double), cmp);

    if(l[0] >= (l[1] + l[2])) printf("NAO FORMA TRIANGULO\n");
    else {
        if((l[0]*l[0]) == ((l[1]*l[1]) + (l[2]*l[2]))) printf("TRIANGULO RETANGULO\n");
        if((l[0]*l[0]) > ((l[1]*l[1]) + (l[2]*l[2]))) printf("TRIANGULO OBTUSANGULO\n");
        if((l[0]*l[0]) < ((l[1]*l[1]) + (l[2]*l[2]))) printf("TRIANGULO ACUTANGULO\n");
        if(l[0] == l[1] && l[1] == l[2]) printf("TRIANGULO EQUILATERO\n");
        if(l[0] == l[1] && l[1] != l[2] || l[0] == l[2] && l[2] != l[1] || l[2] == l[1] && l[1] != l[0])printf("TRIANGULO ISOSCELES\n");
    }
}