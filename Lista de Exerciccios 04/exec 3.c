#include <stdio.h>
#include <math.h>




int ehprimo (int n){
    int p, r;
    p = n;
    for ( r = 2; r < p; r++) if (p % r == 0) break;
        if ( p == r) printf ("%d - Eh primo!", n);
        else printf ("%d - Nao eh primo!", n);
}

int main() {
    int  n;
    printf ("\ndigite um numero para saber se ele eh primo: ");
    scanf ("%d", &n);
    ehprimo6(n);
}
