#include <stdio.h>
//primeiro exercício do teste para Estágio em Desenvolvimento - Ribeirão Preto

//Ele inicializa as variáveis INDICE, SOMA e K e, em seguida, 
//executa um loop while que incrementa K de 1 até K atingir o valor de INDICE. 
//Durante cada iteração do loop, SOMA é atualizado para SOMA + K. 
//No final, o valor final de SOMA é impresso na tela.

int main() {
    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("%d\n", SOMA); // Imprime o valor final da variável SOMA que é 91

    return 0;
}
