#include <stdio.h>
#include <stdlib.h>

// Constantes para o número de movimentos
#define MOVIMENTOS_TORRE 4
#define MOVIMENTOS_BISPO 4
#define MOVIMENTOS_CAVALO 8
#define MOVIMENTOS_RAINHA 8

// Protótipos das funções
void moverTorre(int casas, char direcao);
void moverBispo(int casas, char direcao);
void moverCavalo(void);
void moverRainha(int casas, char direcao);
void moverBispoComLoops(void);

int main() {
    printf("Movimentos da Torre (recursivo):\n");
    moverTorre(MOVIMENTOS_TORRE, 'c'); // Torre movendo para cima
    printf("\n");
    
    printf("Movimentos do Bispo (recursivo):\n");
    moverBispo(MOVIMENTOS_BISPO, 'sd'); // Bispo movendo na diagonal superior direita
    printf("\n");
    
    printf("Movimentos do Cavalo (loops complexos):\n");
    moverCavalo(); // Cavalo movendo em L
    printf("\n");
    
    printf("Movimentos da Rainha (recursivo):\n");
    moverRainha(MOVIMENTOS_RAINHA, 'd'); // Rainha movendo para direita
    printf("\n");
    
    printf("Movimentos do Bispo (loops aninhados):\n");
    moverBispoComLoops(); // Bispo com loops aninhados
    printf("\n");
    
    return 0;
}

// Função recursiva para movimento da Torre
void moverTorre(int casas, char direcao) {
    // Caso base - quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    switch(direcao) {
        case 'c': printf("Cima\n"); break;
        case 'b': printf("Baixo\n"); break;
        case 'e': printf("Esquerda\n"); break;
        case 'd': printf("Direita\n"); break;
        default: printf("Direção inválida\n"); break;
    }
    
    // Chamada recursiva para a próxima casa
    moverTorre(casas - 1, direcao);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas, char direcao) {
    // Caso base - quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    switch(direcao) {
        case 'sd': printf("Subindo na diagonal direita\n"); break;
        case 'se': printf("Subindo na diagonal esquerda\n"); break;
        case 'bd': printf("Descendo na diagonal direita\n"); break;
        case 'be': printf("Descendo na diagonal esquerda\n"); break;
        default: printf("Direção inválida\n"); break;
    }
    
    // Chamada recursiva para a próxima casa
    moverBispo(casas - 1, direcao);
}

// Função para movimento do Cavalo usando loops complexos
void moverCavalo(void) {
    // Movimento em L: 2 casas para cima, 1 para direita
    
    // Primeira parte do L (vertical)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    
    // Segunda parte do L (horizontal)
    printf("Direita\n");
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas, char direcao) {
    // Caso base - quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Imprime a direção do movimento
    switch(direcao) {
        case 'c': printf("Cima\n"); break;
        case 'b': printf("Baixo\n"); break;
        case 'e': printf("Esquerda\n"); break;
        case 'd': printf("Direita\n"); break;
        case 'sd': printf("Subindo na diagonal direita\n"); break;
        case 'se': printf("Subindo na diagonal esquerda\n"); break;
        case 'bd': printf("Descendo na diagonal direita\n"); break;
        case 'be': printf("Descendo na diagonal esquerda\n"); break;
        default: printf("Direção inválida\n"); break;
    }
    
    // Chamada recursiva para a próxima casa
    moverRainha(casas - 1, direcao);
}

// Função para movimento do Bispo com loops aninhados
void moverBispoComLoops(void) {
    // Loop externo para movimento vertical (subindo)
    for (int vertical = 1; vertical <= 4; vertical++) {
        printf("Subindo\n");
        
        // Loop interno para movimento horizontal (direita)
        for (int horizontal = 1; horizontal <= vertical; horizontal++) {
            if (horizontal == vertical) {
                printf("Movendo na diagonal direita\n");
                break;
            }
        }
    }
}