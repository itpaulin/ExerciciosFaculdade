#include <stdio.h>

int mes(int n){

    switch (n)
    {
    case 1: printf("Janeiro");
        break;
    case 2: printf("Fevereiro");
        break;
    case 3: printf("Março");
        break;
    case 4: printf("Abril");
        break;
    case 5: printf("Maior");
        break;
    case 6: printf("Junho");
        break;
    case 7: printf("Julho");
        break;
    case 8: printf("Agosto");
        break;
    case 9: printf("Setembro");
        break;
    case 10: printf("Outubro");
        break;
    case 11: printf("Novembro");
        break;
    case 12: printf("Dezembro");
        break;
    
    default: printf ("vazio");
        break;
    }
}

main(){
    int n;

    printf("Digite um valor inteiro entre 1 e 12: ");
    scanf("%d", &n);

    mes(n);
}