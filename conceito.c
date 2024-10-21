#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char convercao(float nota){
    char conceito = ' ';

    if(nota < 3){
        conceito = 'E';
    }else if(nota >= 3 && nota < 6){
        conceito = 'D';
    }else if(nota >= 6 && nota < 7.5){
        conceito = 'C';
    }else if(nota >= 7.5 && nota < 9){
        conceito = 'B';
    }else if(nota >= 9){
        conceito = 'A';
    }

    return conceito;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a sua nota\n");

    float nota;
    scanf("%f", &nota);

    while(nota > 10 || nota < 0){
        printf("Valor fora da faixa\nDigite um valor entre 0 e 10\n");
        scanf("%f", &nota);
    }

    char resultado = convercao(nota);
    printf("Conceito: %c\n", resultado);

    return 0;
}
