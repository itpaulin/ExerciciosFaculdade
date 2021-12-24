#include <stdio.h>

int vogal(char letra){

(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? 1 : 0;
   
}

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
    return 0;
}

int consoante (char letra){

    if (ehletra(letra) && !vogal(letra)){
        return 1;
    }
    return 0;
}

int algarismo (char letra){

    if(letra >= '0' && letra <= '9'){
     return 1;
    }
    return 0;
}
    


main (){

     char letra;

    printf("digite uma letra: "); //////input
    letra = getchar ();       /////output
    
    printf("Eh vogal: %s", vogal(letra) ? "Sim" : "Nao");
    printf("\nEh maiuscula: %s", maiuscula(letra) ? "Sim" : "Nao");
    printf("\nEh minuscula: %s", minuscula(letra) ? "Sim" : "Nao");
    printf("\nEh letra: %s", ehletra(letra) ? "Sim" : "Nao");
    printf("\nEh consoante: %s", consoante(letra) ? "Sim" : "Nao");
    printf("\nEh algarismo: %s", algarismo(letra) ? "Sim" : "Nao");

} 