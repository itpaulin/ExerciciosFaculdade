#include <stdio.h>

main(){
    char letra;
    printf("Digite um caracter: ");
    letra = getchar();
    printf("\n\nEh vogal: %s",(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? "Sim" : "Nao");
    printf("\nEh minuscula: %s", ('a' <= letra && letra <= 'z') ? "Sim" : "Nao");
    printf("\nEh  maiuscula: %s", ('A' <= letra && letra <= 'Z') ? "Sim" : "Nao");
    printf("\nEh letra: %s", ('A' <= letra && letra <= 'Z') || ('a' <= letra && letra <= 'z') ? "Sim" : "Nao");
    printf ("\nEh consoante: %s",(('A' <= letra && letra <= 'Z') || ('a' <= letra && letra <= 'z')) && (!(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')) ? "Sim" : "Nao");
    printf ("\nEh algarismo: %s", (letra >= '0' && letra <= '9') ? "Sim" : "Nao");

} 