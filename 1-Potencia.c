#include <stdio.h>
// Função recursiva para calcular base elevada ao expoente (x^y)
int potencia(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * potencia(x, y - 1);
}

int main() {
    int base, expoente, resultado;

    printf("----- Calculo de Potencia x^y -----\n");
    
    printf("Digite o valor da base x: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente y: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);

    printf("\nResultado: %d elevado a %d e igual a %d\n", base, expoente, resultado);

    return 0;
}