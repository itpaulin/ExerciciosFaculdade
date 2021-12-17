#include <stdio.h>

int divisivel (int x, int y){

    if (x % y == 0){
        return 1;
    }
    return 0;
}

main(){
    int x,y;
    printf ("Escreva primeiro numero: ");
    scanf("%d", &x);
    printf ("Escreva segundo numero: ");
    scanf("%d", &y);


      printf("\nPrimeiro numero eh divisivel pelo segundo: %s", divisivel(x,y) ? "Sim" : "Nao");

      if (x % 2 == 0){
          printf ("\nPrimeiro numero eh PAR");
      }
      else printf("\nPrimeiro numero eh impar");

      if (y % 2 == 0){
          printf ("\nSegundo numero eh PAR");
      }
      else printf("\nSegundo numero eh impar");


}