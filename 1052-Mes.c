#include <stdio.h>

int main(){
    char months[30][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int months_id[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    
    int chosen, i;
    scanf("%d", &chosen);

    for(i=0; i<12; i++){
        if(chosen == months_id[i]) break;
    }

    printf("%s\n", months[i]);

    return 0;
}