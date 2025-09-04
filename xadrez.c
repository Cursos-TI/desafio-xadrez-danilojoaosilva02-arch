#include <stdio.h>

// Movimento da torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Torre andou para direita\n");
    moverTorre(casas - 1); 
}

// Movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Rainha andou para esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do bispo
void moverBispo(int linhas, int colunas) {
    if (linhas == 0) return;
    for (int j = 0; j < colunas; j++) {
        printf("Bispo andou para cima/direita\n");
    }
    moverBispo(linhas - 1, colunas);
}

// Movimento do Cavalo
void moverCavalo(int movimentos) {
    int i = 0;
    while (i < movimentos) {
        for (int passoVertical = 1; passoVertical <= 2; passoVertical++) {  // Duas casas para cima
            printf("Cavalo andou para cima\n");
        }
        for (int passoHorizontal = 1; passoHorizontal <= 1; passoHorizontal++) {  // Uma casa para direita
            printf("Cavalo andou para direita\n");
        }
        i++;
    }
}

int main() {
    
    int casasTorre = 5;
    int casasBispoLinhas = 3;
    int casasBispoColunas = 2;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    // Movimentos da Torre
    moverTorre(casasTorre);
    printf("\n");

    // Movimentos do Bispo
    moverBispo(casasBispoLinhas, casasBispoColunas);
    printf("\n");

    // Movimentos da Rainha
    moverRainha(casasRainha);
    printf("\n");

    // Movimentos do Cavalo
    moverCavalo(movimentosCavalo);

    return 0;
}