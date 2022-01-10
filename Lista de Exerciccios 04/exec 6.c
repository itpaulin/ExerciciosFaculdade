#include <stdio.h>

int oposto(int x){
    int a = -(x);
    while (x != a){
        x--;
    }
    return x;
}

int valorabsoluto(int x){
    int a;
    if (x < 0) {
        a = -(x);
        while (x != a){
            x++;
        }
        return x;
    }
    else return x;
}

int adicao (int x, int y){
    int a = 0;

     while (a != (x+y)){
         a++;
     }
     return a;
}


int subtracao(int n, int m){
    if (m==0) return n;
        if (m<0) return subtracao(++n, ++m);
        else return (subtracao(--n, --m));
}

int main(void){
    int n,m;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("digite outro numero: ");
    scanf("%d", &m);

    printf("o oposto do primeiro numero: %d", oposto(n));
    printf("\no valor absoluto do segundo numero: %d",valorabsoluto(n));

    printf("o oposto do segundo numero: %d", oposto(m));
    printf("\no valor absoluto do segundo numero: %d",valorabsoluto(m));

    printf("\nA adicao desses numeros: %d", adicao(n,m));
    
    printf("\nA subtracao desses numeros: %d", subtracao(n,m));



   // printf("\na subtracao: %d", )
    //printf("\na adicao: %d", )
   //printf("\na multiplicacao: %d", )
    //printf("\na divisao: %d", )
    //printf("\no resto da divisao: %d", )
}