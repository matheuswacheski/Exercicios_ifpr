#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int fat, result = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &fat);

    if (fat < 0) {
        printf("O fatorial não é definido para números negativos.\n");
        return 1; // Saída com erro
    }

    if (fat == 0) {
        result = 1;
    } else {
        for (int i = 1; i <= fat; i++) {
            result *= i;
        }
    }

    printf("O resultado é %d\n", result);
    return 0;
}

