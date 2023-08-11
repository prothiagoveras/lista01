#include <stdio.h>

int main() {
    int n; // Número de espectadores
    int idade, opiniao;
    int excelente = 0, bom = 0, regular = 0;
    int totalIdadeExcelente = 0, totalIdadeBom = 0, totalIdadeRegular = 0;

    printf("Digite o número de espectadores: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Espectador %d:\n", i);
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        printf("Opinião (excelente - 3, bom - 2, regular - 1): ");
        scanf("%d", &opiniao);

        switch (opiniao) {
            case 3:
                excelente++;
                totalIdadeExcelente += idade;
                break;
            case 2:
                bom++;
                totalIdadeBom += idade;
                break;
            case 1:
                regular++;
                totalIdadeRegular += idade;
                break;
            default:
                printf("Opinião inválida. Use 3 para excelente, 2 para bom e 1 para regular.\n");
                i--; // Decrementar para tentar novamente
        }
    }

    printf("\nQuantidade de pessoas:\n");
    printf("Excelente: %d\n", excelente);
    printf("Bom: %d\n", bom);
    printf("Regular: %d\n", regular);

    printf("\nMédia da idade:\n");
    if (excelente > 0) {
        printf("Excelente: %.2f\n", (float) totalIdadeExcelente / excelente);
    }
    if (bom > 0) {
        printf("Bom: %.2f\n", (float) totalIdadeBom / bom);
    }
    if (regular > 0) {
        printf("Regular: %.2f\n", (float) totalIdadeRegular / regular);
    }

    printf("\nPorcentagem de resposta:\n");
    printf("Excelente: %.2f%%\n", (float) excelente * 100 / n);
    printf("Bom: %.2f%%\n", (float) bom * 100 / n);
    printf("Regular: %.2f%%\n", (float) regular * 100 / n);

    return 0;
}