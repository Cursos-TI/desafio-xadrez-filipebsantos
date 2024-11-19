#include <stdio.h>

// Função recursiva para mover o Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para mover a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Movimento do Cavalo usando loops aninhados e condições múltiplas
void moverCavalo() {
    int movimentos[2][2] = {{2, 1}, {1, 2}}; // Combinação de movimentos em L
    int x = 0, y = 0; // Posição inicial do Cavalo

    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            // Aplica um movimento em L
            x += movimentos[i][j];
            y += movimentos[j][i];
            printf("Cavalo: (%d, %d)\n", x, y);

            // Verificação para resetar e continuar
            if (x > 2 || y > 2) {
                printf("Movimento não permitido, resetando...\n");
                x = 0;
                y = 0;
                continue;
            }
        }
    }
}

int main() {
    // Chamando as funções para cada peça
    printf("Movimentação do Bispo:\n");
    moverBispo(5);

    printf("\nMovimentação da Torre:\n");
    moverTorre(5);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}
