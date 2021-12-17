#include <stdio.h>


float graustoradiano(float G){
	const float PI = 3.141592;
	return (PI * G)/180;
}



main(){
	
	float x;
	 printf("digite numero de graus: ");
	 scanf("%f", &x);
	
	float R = graustoradiano (x);
	
	printf ("%f",R);
	
}
