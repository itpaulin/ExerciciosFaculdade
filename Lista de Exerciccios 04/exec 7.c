#include <stdio.h>
#include <math.h>
// PROGRAMA QUE ESTIMA RAIZ QUADRADA
//float rzqd(float n){

float raizquadrada(float numero){	
    float 	r= 1;
		/*: Menor raiz exata aproximada de n */
	
	while( numero > (r * r) )++r;

	while( numero < (r * r) )r-= 1E-6; 

	return r;

}

int main()
{  
    float numero;
    
    printf("Entre com um numero positivo: ");
    scanf("%f",&numero);
    
    printf("A raiz quadrada de %.2f = %.3f \n",numero,raizquadrada(numero));


}
