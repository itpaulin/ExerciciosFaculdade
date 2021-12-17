#include <stdio.h>

float formatriangulo (float a, float b, float c){
    if( a < b + c && b < a + c  && c < b + a){
    return 1;
    }
    else return 0;
}

float tipotriangulo(float a, float b, float c){

    if (a == b == c){
        return 3;               // EQUILÁTERO
    }
    else if (a == b || a == c || b == c){
        return 2;               // ISÓSCELES
    }
    else if (a != b && a!= c && c != b){
        return 1;               // ESCALENO
    }
    else return 0;              // NAO É TRIANGULOO
}

main (){

    float a,c,b;
    printf("digite lado A: ");
    scanf("%f", &a);
    printf("digite lado B: ");
    scanf("%f", &b);
    printf("digite lado C: ");
    scanf("%f", &c);

     printf("\nEsses lados formam um triangulo: %s", formatriangulo(a,b,c) ? "Sim" : "Nao");
if (formatriangulo(a,b,c) == 1){
    if (tipotriangulo(a,b,c) == 1){
        printf ("\nEste eh um triangulo Escaleno");
    }
    if (tipotriangulo(a,b,c) == 2){
        printf ("\nEste eh um triangulo Isosceles");
    }
    if (tipotriangulo(a,b,c) == 3){
        printf ("\nEste eh um triangulo Equilatero");
    }
 
    if (tipotriangulo(a,b,c) == 0){
        printf ("\nIsto nao eh um triangulo");
    }
}   
}