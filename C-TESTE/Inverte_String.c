#include <stdio.h>

// Terceiro exercício do teste para Estágio em Desenvolvimento - Ribeirão Preto

//Este programa usa uma função inverterString para inverter os caracteres de uma string. 
//Ele primeiro calcula o comprimento da string usando um loop enquanto encontra o caractere nulo de terminação \0. 
//Em seguida, usa um loop para trocar os caracteres da primeira metade da string com os caracteres correspondentes da segunda metade. 
//Finalmente, no main(), ele demonstra como usar essa função com uma string pré-definida, 
//mas vocês podem modificar para ler a entrada do usuário caso desejem.

// Função para inverter uma string
void inverterString(char *str) {
    // Calcula o comprimento da string
    int comprimento = 0;
    while (str[comprimento] != '\0') {
        comprimento++;
    }

    // Inverte os caracteres
    for (int i = 0; i < comprimento / 2; i++) {
        char temp = str[i];
        str[i] = str[comprimento - i - 1];
        str[comprimento - i - 1] = temp;
    }
}

int main() {
    // String a ser invertida
    char string[] = "Hello, Target!";

    printf("String original: %s\n", string);

    // Inverte a string
    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
