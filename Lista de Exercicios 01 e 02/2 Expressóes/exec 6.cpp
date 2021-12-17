#include <stdio.h>
#include <math.h>

float distancia (float xa,float  xb, float  ya, float yb){
	
	return sqrt(pow((xa - xb),2) + pow((ya - yb),2));
	
}


main(){
	
	float xa,xb, ya, yb;
	
	printf("Digite ponto de A em X: \n");
	scanf("%f", &xa);
	
	printf("Digite ponto de A em Y: \n");
	scanf("%f", &ya);
	
	printf("Digite ponto de B em X: \n");
	scanf("%f", &xb);
	
	printf("Digite ponto de B em Y: \n");
	scanf("%f", &yb);

	float D = distancia(xa,xb,ya,yb);
	
	printf("A disdtancia entre esses dois pontos = %.2f",D); 


}





