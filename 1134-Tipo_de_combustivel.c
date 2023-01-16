#include <stdio.h>

int main(){
    int x = 0;
    int alcool = 0, gasolina = 0, diesel = 0;

    while(x != 4){
        do{
            scanf("%x", &x);
        } while(x < 1 || x > 4);

        if(x == 1) alcool++;
        else if(x == 2) gasolina++;
        else if(x == 3) diesel++;
        else {
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
            break;
        }
    }

    return 0;
}