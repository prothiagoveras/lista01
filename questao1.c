#include <stdio.h>

int main() {
    float valorCompra, valorVenda;
    
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valorCompra);
    
    if (valorCompra > 20.0) {
        valorVenda = valorCompra * 1.45;

    } else {
        valorVenda = valorCompra * 1.3;
    }
    
    printf("O valor de venda do produto é: %.2f\n", valorVenda);
    
    return 0;
}