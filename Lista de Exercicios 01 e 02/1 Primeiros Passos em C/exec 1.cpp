#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	char * txt;
	
	txt = (char *)malloc(sizeof(char)); // reserva espaco

	printf("Digite algo: ");
  	scanf("\n");
	 gets (txt)	;						// usar o GETS pq o scanf entende o BARRAESPACO como fim.

	printf ("Voce digitou: \n%s", txt);
		
	
	
	free (txt); 						// libera espaco
}
