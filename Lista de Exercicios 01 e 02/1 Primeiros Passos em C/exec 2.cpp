#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

	
	char * nome;
	int dia,mes,ano;
	float salario;
	char ident;
	
	nome = (char *)malloc(sizeof(char));

	printf ("Seu nome completo: ");
	scanf ("\n");
	gets (nome);
	
	printf ("O dia que voce nasceu: ");
	scanf ("%d", &dia );

	printf ("O mes que voce nasceu: ");
	scanf ("%d", &mes );
	
	printf ("O ano que voce nasceu: ");
	scanf ("%d", &ano);
	
	
	printf ("Seu salario na empresa: ");
	scanf ("%f", &salario);
	
	printf ("Digite [F] para funcionario e [C] para chefe: ");
	scanf ("\n");
	ident = getchar();
	
	
	printf ("Seu nome e %s\nVoce nasceu em %d/%d/%d\nRecebe um total de %f mensalmente\nOcupa a posicao  %c		(F= funcionario C=Chefe)", nome, dia, mes, ano, salario, ident);
	free (nome);
}
