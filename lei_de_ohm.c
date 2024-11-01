#include <stdio.h>

int main(){
    int opcao;
    
    float corrente, tensao, resistencia;
    
    printf("Bem vindo à calculadora de lei ohm\n");
    printf("Escolha uma opção\n1-Calcular tensão\n2-Calcular Resistencia\n3-Calcular Corrente\n0-Sair\n");
    
    scanf("%d", &opcao);
    
    while (opcao != 0){
        while (opcao < 0 || opcao > 3){
            printf("Opção não disponível\n\n");
            printf("Escolha uma opção\n1-Calcular tensão\n2-Calcular Resistencia\n3-Calcular Corrente\n0-Sair\n");
    
            scanf("%d", &opcao);
        }
        if(opcao == 0){
            break;
        }
        switch(opcao){
            case 0:
            break;
            
            case 1:
            printf("Digite a resistência equivalente\n");
            scanf("%f", &resistencia);
            
            printf("Digite a corrente\n");
            scanf("%f", &corrente);
            
            tensao = resistencia * corrente;
            
            printf("O valor da tensao eh: %f V\n", tensao);
            break;
            
            case 2:
            printf("Digite a tensao\n");
            scanf("%f", &tensao);
            
            printf("Digite a corrente\n");
            scanf("%f", &corrente);
            
            resistencia = tensao / corrente;
            
            printf("O valor da resistencia eh: %f OHMs\n", resistencia);
            break;
            
            case 3:
            printf("Digite a tensao\n");
            scanf("%f", &tensao);
            
            printf("Digite a resistencia equivalente\n");
            scanf("%f", &resistencia);
            
            corrente = tensao / resistencia;
            
            printf("O valor da corremte eh: %f A\n", corrente);
            break;
        }
        printf("Escolha uma opção\n1-Calcular tensão\n2-Calcular Resistencia\n3-Calcular Corrente\n0-Sair\n");
    
        scanf("%d", &opcao);
    }
}
