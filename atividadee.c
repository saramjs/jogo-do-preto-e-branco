#include <stdio.h>

#define MAX_L 100
#define MAX_C 100

int tabuleiro[MAX_L][MAX_C];

int main() {
    int L, C, P;
    int Xi, Yi;

    scanf("%d %d", &L, &C);

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            tabuleiro[i][j] = 0; 
        }
    }

    scanf("%d", &P);

    for (int i = 0; i < P; i++) {
        scanf("%d %d", &Xi, &Yi);
        tabuleiro[Xi - 1][Yi - 1] = 1; 
    }

    int countBrancas = 0;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (tabuleiro[i][j] == 0) { 
                if (i > 0 && tabuleiro[i - 1][j] == 1) continue; 
                if (i < L - 1 && tabuleiro[i + 1][j] == 1) continue; 
                if (j > 0 && tabuleiro[i][j - 1] == 1) continue; 
                if (j < C - 1 && tabuleiro[i][j + 1] == 1) continue; 

                countBrancas++;
            }
        }
    }


    printf("%d\n", countBrancas);

return 0;
}