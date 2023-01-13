#include <stdio.h>
#include <string.h>

int main(){
    char password[20];

    while(1){
        gets(password);
        if(!strcmp(password, "2002")) {
            printf("Acesso Permitido\n");
            break;
        } else printf("Senha Invalida\n");
    }

    return 0;
}