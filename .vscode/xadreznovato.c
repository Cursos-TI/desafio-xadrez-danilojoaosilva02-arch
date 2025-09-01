#include <stdio.h>

int main (){


    //Codigo while para torre

    int i = 1;

    while (i <= 5)
    {
        printf("Torre andou para direita\n");
        i++;
    }

    printf("\n");


    //Codigo for para Bispo
    
    for (int i = 1; i <= 6; i++)
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

    return 0;
}