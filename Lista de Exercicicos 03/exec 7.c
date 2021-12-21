#include <stdio.h>

int minuscula  (char letra){

    if ('a' <= letra && letra <= 'z'){
      return 1;
    }
    return 0;
}

int maiuscula  (char letra){

    if ('A' <= letra && letra <= 'Z'){
        return 1;
    }
    return 0;
}


int ehletra (char letra){

    if(maiuscula (letra) || minuscula (letra)){
        return 1;
    }
    else {
        letra = "0";
        return 0;
    }
}

int nmrletra (char letra){
    if (!ehletra(letra)) return 0;
    
    
    return maiuscula(letra) ? letra - 64 : letra - 96;
}
main(){
    char letra;

    printf("digite o caracter: ");
    scanf ("\n");
    letra = getchar ();
    
    printf ("O numero dessa letra no alfabeto é: %d", nmrletra(letra));
    
}
