#include <stdio.h>
#include <math.h>

float operador (char sinal, float x, float y){
    switch (sinal)
    {
    case 'x': return (x * y);
    
    case 'X': return (x * y);

    case '+': return (x + y);

    case '-': return (x - y);

    case '*' : return (x * y);

    case '/': return ( x / y);
    
    case ':': return ( x / y);
    
    default: printf("Nenhum operador fornecido!");
        break;
    }
}

main(){
    float x,y, resultado;
    char sinal;

    printf("forneca um numero: ");
    scanf("%f", &x);

    printf("forneca outro numero: ");
    scanf("%f", &y);

    printf("Digite o sinal do calculo desejado: ");
    scanf("\n");
    sinal = getchar ();

    resultado = operador(sinal, x, y);

    printf ("Resultado da operacao: %.2f", resultado);
}