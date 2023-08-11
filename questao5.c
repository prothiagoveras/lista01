#include <stdio.h>

int main() {
    int n; // Número de transações
    char codigo;
    double valor, valorAVista = 0, valorAPrazo = 0;

    printf("Digite o número de transações: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Transação %d:\n", i);

        printf("Digite o código (V para à vista, P para a prazo): ");
        scanf(" %c", &codigo);

        printf("Digite o valor da transação: ");
        scanf("%lf", &valor);

        switch (codigo) {
            case 'V':
            case 'v':
                valorAVista += valor;
                break;
            case 'P':
            case 'p':
                valorAPrazo += valor;
                break;
            default:
                printf("Código inválido. Use V para à vista ou P para a prazo.\n");
                i--; // Decrementar para tentar novamente
        }
    }

    int opcao;
    double valorTotalCompras;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Valor total das compras à vista\n");
        printf("2. Valor total das compras a prazo\n");
        printf("3. Valor total das compras efetuadas\n");
        printf("4. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor total das compras à vista: %.2lf\n", valorAVista);
                break;
            case 2:
                printf("Valor total das compras a prazo: %.2lf\n", valorAPrazo);
                break;
            case 3:
                valorTotalCompras = valorAVista + valorAPrazo;
                printf("Valor total das compras efetuadas: %.2lf\n", valorTotalCompras);
                break;
            case 4:
                printf("Saindo da aplicação.\n");
                return 0;
            default:
                printf("Opção inválida. Escolha uma opção válida.\n");
        }
    }

    return 0;
}