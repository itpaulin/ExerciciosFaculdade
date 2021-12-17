#include <stdio.h>
#include <math.h>

// N = NUMERADOR D = DENOMINADOR

float adicao (float nx, float dx, float ny, float dy, float *nf, float *df){
	
	*nf = (nx * dy + ny * dx);
	*df = (dx * dy);
	
}

float subtracao(float nx, float dx, float ny, float dy, float *nf, float *df){

	*nf = (nx * dy - ny * dx);
	*df = (dx * dy);
}


float multiplicacao(float nx, float dx, float ny, float dy, float *nf, float *df){
	
	*nf = (nx * ny);
	*df = (dx * dy);
}


float divisao(float nx, float dx, float ny, float dy, float *nf, float *df){
	
	*nf = (nx * dy);
	*df = (dx * ny);
}


main(){
	float nx = 10;
	float dx = 2;
	float ny = 20;
	float dy = 4;
	float nf;
	float df;
	
	adicao (nx,dx,ny,dy,&nf,&df);
	printf("Adicao: %.2f/%.2f\n", nf, df);
	
	subtracao (nx,dx,ny,dy,&nf,&df);
	printf("subtracao: %.2f/%.2f\n", nf,df);
	
	multiplicacao (nx,dx,ny,dy,&nf,&df);
	printf("multiplicacao: %.2f/%.2f\n", nf,df);
	
	divisao (nx,dx,ny,dy,&nf,&df);
	printf("divisao: %.2f/%.2f\n", nf,df);
	
}
