#include <stdio.h>

int oposto(int x){
    int auxiliar = 0;
    if (x > 0){
        while (x != 0){
            --x;
            --auxiliar;
        }
    } else { 
        while (x != 0){
            ++x;
            ++auxiliar;
        }
    }
    return auxiliar;
}

int valorabsoluto(int x){
    return (x >= 0) ? x : oposto(x);
}

int subtracao (int x, int y){
    if (y == 0) return x;
    if (y > 0) return subtracao(--x, --y);
    return subtracao(++x, ++y);
}

int adicao (int x, int y){
    if (y == 0) return x;
    else if (y > 0){
        while (y != 0){
        ++x;
        --y;
        }
        return x;
    }
    else if (y < 0){
        while ( y != 0){
            --x;
            ++y;
        }
        return x;
    }
}

int vezes(int x, int y){
    if ( (x == 0) || (y == 0)) return 0;
    if (x == 1) return y;
    if (y == 1) return x;
    if (x > 0) return adicao(y,vezes(++x, y));
    return subtracao (vezes(++x, y), y);
}

int divisao ( int x, int y){
    if (x < y) return 0;
    return 1 + divisao (subtracao(x,y),y);
}

int resto (int x, int y) {
    return subtracao (x,vezes (divisao(x,y),y));
}

int main(){
    int n,m;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("digite outro numero: ");
    scanf("%d", &m);
    
    printf("\n\no oposto desses numeros: %d & %d", oposto(n), oposto(m));

    printf("\nO valor absoluto desses numeros: %d & %d",valorabsoluto(n), valorabsoluto(m));

    printf("\nA adicao desses numeros: %d", adicao(n,m));
    
    printf("\nA subtracao desses numeros: %d", subtracao(n,m));

    printf("\n A multiplicacao desses numeros: %d", vezes(n,m));

    printf("\n A divisao desses numeros: %d", divisao(n,m));

    printf("\n O resto da  divisao desses numeros: %d", resto(n,m));
}