#include <stdio.h>
#include <math.h>

int potencia (int x, int y){
    int A = 1;
    int R = x;
    while (A != y){
       R = R * x;
       A = A + 1;
    }
    printf ("Resultado da conta = %d", R);
}
main(){
    int x, y; 
    
    printf("digite seu numero: ");
    scanf ("%d",&x);

    printf("Digite a potencia: ");
    scanf ("%d", &y);

    potencia(x,y);

}