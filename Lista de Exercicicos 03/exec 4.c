#include <stdio.h>

float maior(float x, float y){
    if (x > y){
        return x;
    }
    else return y;
}

float maiortres(float x, float y, float z){
 return (maior (x,y) < z) ? ("%.2f",z) : ("%.2f", maior(x,y));
}


main(){
    float x,y,z;
    printf (" Valor de X: ");
    scanf ("%f", &x);
    printf (" Valor de Y: ");
    scanf ("%f", &y);
    printf (" Valor de Z: ");
    scanf ("%f", &z);

    printf("o maior entre X e Y : %.2f", maior(x,y));
    printf("\n O maior entre as 3 variaveis : %.2f",maiortres(x,y,z));
}