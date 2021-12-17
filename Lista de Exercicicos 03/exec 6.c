#include <stdio.h>
#include <math.h>

float condicoes (float peso, float altura){
    float IMC;
    IMC = peso/(pow(altura,2));
    
    if(IMC  < 25){ //Ausente
        return 0;
    }
    else if (IMC >= 25 && IMC < 30){ // Sobrepeso
        return 1;
    }
    else if (IMC >= 30 && IMC < 35){ // Obesidade Grau I
        return 2;
    }
    else if (IMC >= 35 && IMC < 40){ // Obesidade Grau II
        return 3;
    }
    else if (IMC >= 40){ //Obesidade Mórbida
        return 4;
    }
}

main (){
    float peso,altura;
    printf("digite sua altura: ");
    scanf ("%f", &altura);
    printf("digite seu peso: ");
    scanf("%f", &peso);

    if (condicoes(peso, altura) == 1){
        printf ("Voce esta com SOBREPESO");
    }
    if (condicoes(peso, altura) == 2){
        printf ("Voce esta com Obesidade Grau 1");
    }
    if (condicoes (peso, altura) == 3){
        printf ("Voce esta com Obesidade Grau 2");
    }
    if (condicoes(peso, altura) == 4){
        printf ("Voce esta com Obesidade Morbida");
    }
    if (condicoes(peso, altura) == 0){
        printf("Voce nao possui obesidades");
    }
}