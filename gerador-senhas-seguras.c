#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    // Define os critérios de senha
    int comprimento_minimo = 12;
    char caracteres_especiais[] = "!@#$^&*";
    char letras_maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letras_minusculas[] = "abcdefghijklmnopqrstuvwxyz";
    char numeros[] = "0123456789";

    // Concatena todos os caracteres em uma única string
    char todos_caracteres[100];
    strcpy(todos_caracteres, caracteres_especiais);
    strcat(todos_caracteres, letras_maiusculas);
    strcat(todos_caracteres, letras_minusculas);
    strcat(todos_caracteres, numeros);

    // Obtém o tamanho da string de todos os caracteres
    int tamanho_todos_caracteres = strlen(todos_caracteres);

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Gere a senha
    char senha[comprimento_minimo + 1];
    for (int i = 0; i < comprimento_minimo; i++) {
        senha[i] = todos_caracteres[rand() % tamanho_todos_caracteres];
    }
    senha[comprimento_minimo] = '\0';

    printf("Senha segura gerada: %s\n", senha);

    return 0;
}
