#include <stdio.h>


float CtoF (float C){
	
	float F = ((1.8 * C) + 32);
	return F;
}

main(){
	
	float c;
	
	printf ("digite uma temperatura em graus Celsius: ");
	scanf ("%f", &c);
	
	
	float F = CtoF(c);
	
	printf ("Em Fahrenheit= %.2f", F);
}
