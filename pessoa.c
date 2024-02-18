#include <stdio.h>
#define texto "Entrada e Saida de dados."

int main() {
    printf("%s\n, texto");
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a Idade:\n");
    scanf("%d", &idade);

    printf("Digite a Altura:\n");
    scanf("%f", &altura);

    printf("Digite o Nome:\n");
    scanf("%s", nome);

    printf("Dados Informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
}