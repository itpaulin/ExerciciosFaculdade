#include <math.h>
#include <stdio.h>

float Delta (float a, float b, float c){

	
	return ((pow(b,2.0)) -4 * a * c);
}
main(){
	float A,B,C;
	printf ("digite o valor de A: ");
	scanf("%f", &A);
	
	printf ("digite o valor de B: ");
	scanf("%f", &B);
	
	printf ("digite o valor de C: ");
	scanf("%f", &C);
	
	float delta = Delta(A,B,C);
	
	printf ("\nO Delta dessa equacao: %.2f", delta);
}
