#include <stdio.h>

int main(){
    int grenais = 0, inter, gremio, empates = 0, c;
    int iwin = 0, gwin = 0;

    do{
        grenais++;
        scanf("%d %d", &inter, &gremio);

        if(inter > gremio) iwin++;
        else if(inter == gremio) empates++;
        else gwin++;

        do{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &c);
        } while(c < 1 || c > 2); 

    } while(c != 2);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, iwin, gwin, empates);
    printf((iwin == gwin) ? "Nao houve vencedor\n" : (iwin > gwin ? "Inter venceu mais\n" : "Gremio venceu mais\n"));
}