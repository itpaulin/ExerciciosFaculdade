#include <stdio.h>
#include <math.h>

float graustoradiano(float G){
	const float PI = 3.141592;
	return (PI * G)/180;
}

float areatriangulo (float a, float b, float graus){
	float  rad = graustoradiano(graus);
	
	return (a * b * sin (rad))/2;	
}

main(){
	float graus = 90;
	float ladoa = 3;
	float ladob = 4;
	
	float area = areatriangulo(ladoa, ladob, graus);
	printf ("area do triangulo: %.2f",area);


}

