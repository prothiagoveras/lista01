#include <stdio.h>

int main() {
    float alturaChico = 1.70;
    float alturaJuca = 1.10;
    int anos = 0;
   
    while (alturaJuca <= alturaChico) {
        alturaChico += 0.02; // Chico cresce 2 centímetros por ano
        alturaJuca += 0.03;  // Juca cresce 3 centímetros por ano
        anos++;
    }
    
    printf("Serão necessários %d anos para Juca ser maior que Chico.\n", anos);
    
    return 0;
}