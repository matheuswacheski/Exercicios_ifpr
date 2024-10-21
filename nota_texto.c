#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *nota;
    float nota1, nota2, nota3, nota4, media;

    nota = fopen("nota.txt", "w");
    if (nota == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    fprintf(nota, "Notas: %.2f, %.2f, %.2f, %.2f\n", nota1, nota2, nota3, nota4);
    fprintf(nota, "Média: %.2f\n", media);


    fclose(nota);
    return 0;
}

