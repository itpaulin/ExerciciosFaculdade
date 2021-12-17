#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{

	void autoria (void);
	
	autoria ();
	
}


void autoria(void){
	
	char * nome;
	char * sobrenome;

	nome = (char *)malloc(sizeof(char));
	sobrenome = (char *)malloc(sizeof(char));
	
	printf ("Escreva seu nome: ");
	scanf ("\n");
	gets (nome);

	printf ("Escreva seu sobrenome: ");
	scanf ("\n");
	gets (sobrenome);
	
	printf("%s, %s \n", sobrenome, nome);
	free(sobrenome);
	free (nome);
}





