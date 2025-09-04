#include <stdio.h>

int main (){


    //Codigo while para torre

    int i, j;

    char letra;

    i = 1;

    while (i <= 5)
    {
        printf("Torre andou para direita\n");
        i++;
    }

    printf("\n");


    //Codigo for para Bispo
    
    for (int k = 1; k <= 6; k++)
    {
       printf("Bispo andou para cima/direita\n");
    }
    
     printf("\n");


    //Codigo do para Rainha

    i = 1;

    do
    {
        printf("Rainha andou para esquerda\n");
        i++;

    } while (i <= 8);

    printf("\n");

    //Codigo para o cavalo


    for (int k = 1; k <= 3; k++) {
        int j = k;
        do {
            if (j <= 2) {
                printf("Cavalo andou para baixo\n");
            } else {
                printf("Cavalo andou para esquerda\n");
            }
            j++;
        } while (j <= k); 
    }


    return 0;
}