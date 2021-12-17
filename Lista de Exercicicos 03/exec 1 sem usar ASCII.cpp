#include <stdio.h>
// PAULO RICARDO MALTA LEAL 14/12/2021

void vogal(char letra){

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
    printf ("Esta letra eh uma vogal\n");
    }
}

void minuscula  (char letra){

    if ('a' <= letra && letra <= 'z'){
        printf ("Esta letra eh minuscula\n");
    }
}

void maiuscula  (char letra){

    if ('A' <= letra && letra <= 'Z'){
        printf ("Esta letra eh maiuscula\n");
    }
}

void ehletra  (char letra){

    if (letra == 'B' || letra == 'C' || letra == 'D' || letra == 'F' || letra == 'G' || letra == 'H' || letra == 'J' || letra == 'K' || letra == 'L' || letra == 'M' || letra == 'N' || letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S' || letra == 'T' || letra == 'V' || letra == 'X' || letra == 'W' || letra == 'Y' || letra == 'Z' || letra == 'b' || letra == 'c' || letra == 'd' || letra == 'f' || letra == 'g' || letra == 'h' || letra == 'j' || letra == 'k' || letra == 'l' || letra == 'n' || letra == 'm' || letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't' || letra == 'v' || letra == 'x' || letra == 'w' || letra == 'y' || letra == 'z' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf ("Isto eh uma letra\n");
    }
}

void consoante (char letra){

    if (letra == 'B' || letra == 'C' || letra == 'D' || letra == 'F' || letra == 'G' || letra == 'H' || letra == 'J' || letra == 'K' || letra == 'L' || letra == 'M' || letra == 'N' || letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S' || letra == 'T' || letra == 'V' || letra == 'X' || letra == 'W' || letra == 'Y' || letra == 'Z' || letra == 'b' || letra == 'c' || letra == 'd' || letra == 'f' || letra == 'g' || letra == 'h' || letra == 'j' || letra == 'k' || letra == 'l' || letra == 'n' || letra == 'm' || letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't' || letra == 'v' || letra == 'x' || letra == 'w' || letra == 'y' || letra == 'z'){

        printf("Esta letra eh uma consoate\n");
    }
}

void algarismo (char letra){

    if (letra != 'B' && letra != 'C' && letra != 'D' && letra != 'F' && letra != 'G' && letra != 'H' && letra != 'J' && letra != 'K' && letra != 'L' && letra != 'M' && letra != 'N' && letra != 'P' && letra != 'Q' && letra != 'R' && letra != 'S' && letra != 'T' && letra != 'V' && letra != 'X' && letra != 'W' && letra != 'Y' && letra != 'Z' && letra != 'b' && letra != 'c' && letra != 'd' && letra != 'f' && letra != 'g' && letra != 'h' && letra != 'j' && letra != 'k' && letra != 'l' && letra != 'n' && letra != 'm' && letra != 'p' && letra != 'q' && letra != 'r' && letra != 's' && letra != 't' && letra != 'v' && letra != 'x' && letra != 'w' && letra != 'y' && letra != 'z' && letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U'){
        printf ("Isto eh um algarismo\n");
    }
}                     




main(){
    char letra;

    printf("digite uma letra: "); //////input
    scanf("%c", &letra);          /////output

    vogal(letra);

    minuscula(letra);

    maiuscula (letra);

    ehletra (letra);

    consoante(letra);

    algarismo (letra);

    return 0;
}