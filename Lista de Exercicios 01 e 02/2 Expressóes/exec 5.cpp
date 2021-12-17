#include <stdio.h>
#include <math.h>

float  VEsfera (float R){
	const float PI = 3.141592;
	float V = (4*PI*pow(R,3)/3);
	return V;
}

main(){
	float Raio,Volume;
	
	printf ("Digite o Raio da esfera: ");
	scanf ("%f", &Raio);
	
	
	
	printf ("\nVolume da Esfera= %f",Volume = VEsfera(Raio));
}
