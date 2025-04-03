#include <stdio.h>

void moverTorre(int n) {
    if (n == 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

void moverBispo(int n) {
    if (n == 0) return;
    printf("Cima, Direita\n");
    moverBispo(n - 1);
}

void moverRainha(int n) {
    if (n == 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

void moverCavalo() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (i < 2) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
                break;
            }
        }
    }
}

void moverBispoLoops(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    printf("\nMovimento do Bispo (usando loops aninhados):\n");
    moverBispoLoops(5);
    
    return 0;
}
