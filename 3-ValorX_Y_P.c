/*
     Atividade: ED02 - Questao 3
     
     Pergunta: Quais serao os valores de x, y e p ao final do trecho de codigo?
     RESPOSTA: Assim como na questao 1, a resposta depende da interpretacao da linha "–x;"
     
     -- CENARIO 1: Interpretando de forma literal ---
     
     RESULTADO: x = 4, y = 5, p = endereco de y. (Ou Erro de Compilacao)
     
     EXPLICACAO: Se o "–" for um caractere de texto (copiado de um PDF, por exemplo), 
     o codigo nem compila (stray character). Porem, se for um sinal de menos padrao 
     do teclado "-x;", o compilador avalia o valor negativo de x (-4), mas como nao 
     ha atribuicao (nao eh "x = -x;"), esse valor eh descartado. Logo, 'x' continua 
     sendo 4. O 'y' que era 1 (devido a (*p)++) eh somado com o 4 do 'x', resultando 
     em 5. O ponteiro 'p' continua apontando para 'y'.
    
     -- CENARIO 2: Assumindo que "–x;" era um erro de digitacao para "--x;" (decremento) ---
     RESULTADO: x = 3, y = 4, p = endereco de y
     
     EXPLICACAO PASSO A PASSO:
        1. y = 0;      -> y inicia em 0
        2. p = &y;     -> p guarda o endereco de y
        3. x = *p;     -> x recebe o valor de y (x = 0)
        4. x = 4;      -> x passa a valer 4
        5. (*p)++;     -> y e incrementado, passando a ser 1
        6. --x;        -> x sofre decremento, passando a ser 3
        7. (*p) += x;  -> Soma o valor atual de x (3) com o valor de y (1). y vira 4
 */

#include <stdio.h>

int main() {
    int x, y, *p;
    
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    
    // Utilizando --x para permitir que o codigo compile e demonstre o Cenario 2
    --x;
    
    (*p) += x;
    
    // Imprime os resultados finais
    printf("--- Valores Finais (Cenario 2) ---\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    // O (void*) garante que o endereco seja impresso corretamente sem warnings
    printf("p = %p (Apontando para o endereco de y: %p)\n", (void*)p, (void*)&y); 
    
    return 0;
}