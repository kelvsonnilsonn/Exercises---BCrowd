    #include <stdio.h>

    int main(){
        int a, countp = 0, counti = 0, count1 = 0, count2 = 0;

        for(int i=0; i<5; i++){
            scanf("%d", &a);
            if(a % 2 == 0) countp++;
            if(a % 2 == 1) counti++;
            if(a > 0) count1++;
            if(a < 0) count2++;
        }

        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n%", countp, counti, count1, count2);

        return 0;
    }