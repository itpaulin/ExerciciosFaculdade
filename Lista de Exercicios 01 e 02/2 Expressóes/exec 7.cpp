#include <stdio.h>





int sentenca (int X){
	return X =  !(!X && X) && (!X || X ) ;  
}



main(){
	int x;
	int R = sentenca(x);
	
	
	printf("elefantes são mais pesados que gafanhotos? %d\n[1] Verdadeiro\n[2] Falso",R);
 
	
	// QUESTAO 8 - R: CONSEGUIRIA DESENVOLVER ATRAVÉS DA TABELA VERDADE, O PRIMEIRO PARENTESES DA F, MAS NEGANDO VIRA V, O SEGUNDO DA V, V && V = VERDADEIRO (1)
}

