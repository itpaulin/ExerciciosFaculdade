#include <stdio.h>

int fib(int n){
    int i, fib1 = 1, fib2 = 1, soma;
    for ( i = 3; i <= n; i = i + 1){
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}

int fibb(int n){
    if (n == 1) return 1;
    else return fib(n - 1) + fib(n -2);
}

int main(void)
{
    int x;
    printf("Digite um numero: ");
    scanf ("%d", &x);
    printf("%d\n", fibb(x));
    return 0;

}