#include <stdio.h>

// Segundo exercício do teste para Estágio em Desenvolvimento - Ribeirão Preto

//Este programa solicita ao usuário um número e verifica se ele pertence à sequência de Fibonacci. 
//Ele utiliza uma função estaNaSequencia que gera os termos da sequência até que o valor atual exceda o número fornecido. 
//Se o número estiver na sequência, a função retorna verdadeiro (1); caso contrário, retorna falso (0). 
//Em seguida, no main(), ele exibe uma mensagem informando se o número pertence ou não à sequência.

// Função para verificar se um número está na sequência de Fibonacci
int estaNaSequencia(int numero) {
    int anterior = 0;
    int atual = 1;

    // Caso especial para lidar com o número 0
    if (numero == 0)
        return 1;

    // Gera os termos da sequência de Fibonacci até o número exceder o valor dado
    while (atual <= numero) {
        int temp = atual;
        atual = atual + anterior;
        anterior = temp;

        // Se o número está na sequência, retorna verdadeiro
        if (atual == numero)
            return 1;
    }

    // Se o número não foi encontrado na sequência, retorna falso
    return 0;
}

int main() {
    int numero;

    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    if (estaNaSequencia(numero))
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", numero);

    return 0;
}
