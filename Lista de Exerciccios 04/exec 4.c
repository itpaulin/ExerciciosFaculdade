#include <stdio.h>

int fatorial (int n){
    int m = n -1;
    if (n != 0){
        while (m != 1){
            n = n * m;
            m = m - 1;
        }
    }
    else n = 1;
}

main(){
    int n;

    printf("Digite um numero para descobrir seu fatorial: ");
    scanf ("%d", &n);

    printf("O resultado = %d", fatorial(n));

}