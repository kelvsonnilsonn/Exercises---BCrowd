#include <stdio.h>

int main(){
    int ddds[8] = { 61, 71, 11, 21, 32, 19, 27, 31 };
    char cidades[8][30] = { 
        "Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro",
        "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte" 
    };

    int id, i;
    scanf("%d", &id);
    
    for(i=0; i<8; i++){
        if(id == ddds[i]) break;
        if(i == 7){
            i = -1;
            break;
        }
    }

    printf(i == -1 ? "DDD nao cadastrado\n" : "%s\n", cidades[i]);
}