#include <stdio.h>

int main(){
    float ne, n1, n2, n3, n4, media;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4); 

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    printf("Media: %.1f\n", media);

    printf(media >= 7 ? "Aluno aprovado.\n" : media < 5 ? "Aluno reprovado.\n" : "Aluno em exame.\n");

    if(media >= 5 && media < 7) {
        
        scanf("%f", &ne);
        media = (media + ne) / 2;
        printf("Nota do exame: %.1f\n", ne);
        
        printf(media >= 5 ? "Aluno aprovado.\nMedia final: %.1f\n" : "Aluno reprovado.\nMedia final: %.1f\n", media);
    }
    return 0;
}