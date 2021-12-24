#include <stdio.h>
#include <math.h>

main(){

    int N, x;
    printf("digite um valor X$: ");
    scanf ("%d", &N);

    if ( N >= 500){
        x = N / 500 ;
        printf("\n%d cedula(s) de X$ 500", x);
        N = N - (x * 500) ;
    }
    if ( N >= 100){
        x = N / 100 ;
        printf("\n%d cedula(s) de X$ 100", x);
        N = N - (x * 100) ;
    }
    if ( N >= 50){
        x = N / 50 ;
        printf("\n%d cedula(s) de X$ 50", x);
        N = N - (x * 50) ;
    }
    if ( N >= 10){
        x = N / 10 ;
        printf("\n%d cedula(s) de X$ 10", x);
        N = N - (x * 10) ;
    }
    if ( N >= 5){
        x = N / 5 ;
        printf("\n%d cedula(s) de X$ 5", x);
        N = N - (x * 5) ;
    }
    if ( N >= 1){
        x = N / 1 ;
        printf("\n%d cedula(s) de X$ 1", x);
        N = N - (x * 1) ;
    }
}