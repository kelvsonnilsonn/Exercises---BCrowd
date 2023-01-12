#include <stdio.h>
#include <ctype.h>

int main(){
    int n;
    float sapos = 0, ratos = 0, coelhos = 0, total = 0, qnt;
    char specie;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%f %c", &qnt, &specie);

        specie = toupper(specie);
        if(specie == 'R') ratos += qnt;
        else if(specie == 'S') sapos += qnt;
        else coelhos += qnt;

        total += qnt;
    }

    printf("Total: %.0f cobaias\nTotal de coelhos: %.0f\nTotal de ratos: %.0f\nTotal de sapos: %.0f\n", total, coelhos, ratos, sapos);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", (coelhos / total) * 100, (ratos / total) * 100, (sapos / total) * 100);

    return 0;
}