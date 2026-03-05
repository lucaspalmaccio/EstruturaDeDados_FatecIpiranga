#include <stdio.h>
// Função recursiva para encontrar o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("--- Sequencia de Fibonacci ---\n");
    
    printf("Digite quantos termos da sequencia voce deseja ver: ");
    scanf("%d", &n);

    printf("\nOs primeiros %d termos da sequencia sao:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n\n");

    return 0;
}
