#include <stdio.h>

int main() {
    double salario, valorEmprestimo, taxaJuros;
    int numPrestacoes;

    // Solicitar entrada do usuário
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);

    printf("Digite o valor do empréstimo: ");
    scanf("%lf", &valorEmprestimo);

    printf("Digite o número de prestações: ");
    scanf("%d", &numPrestacoes);

    printf("Digite a taxa de juros (porcentagem): ");
    scanf("%lf", &taxaJuros);

    // Convertendo a taxa de juros para fração
    taxaJuros /= 100;

    // Calcular o valor da prestação mensal e o valor total a pagar
    double valorPrestacao = (valorEmprestimo * taxaJuros) / (1 - 1 / (1 + taxaJuros));
    double valorTotalPagar = valorPrestacao * numPrestacoes;

    // Verificar se a prestação é menor ou igual a 30% do salário
    if (valorPrestacao <= 0.3 * salario) {
        printf("\nEmpréstimo permitido!\n");
        printf("Valor da prestação: %.2lf\n", valorPrestacao);
        printf("Valor total a pagar: %.2lf\n", valorTotalPagar);
    } else {
        printf("\nEmpréstimo não permitido. A prestação excede 30%% do salário.\n");
    }

    return 0;
}