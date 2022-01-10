#include <stdio.h>
// NAO PODE USAR A BIBLIOTECA <math.h>

float teto (float x){
    int y = x + 1;
   while (x != y){
       x = x + 0.1;
   }
    return x;
}
float piso (float x){
    int y = x;
   while (x != y){
       x = x - 0.1;
   }
    return x;
}

 main(){
    float x; 
    printf("digite um numero: ");
    scanf ("%f", &x);
    
    printf( " o teto desse numero = %f", teto(x));
    printf(" \n\no Piso desse numero = %f", piso(x));
    return 0;
}