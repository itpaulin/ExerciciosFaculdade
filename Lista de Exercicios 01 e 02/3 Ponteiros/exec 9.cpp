#include <stdio.h>
#include <math.h>

float pontomedio (float xi,float yi, float xf, float yf, float *xm, float *ym){
	
	*xm = (xi+xf/2);
	*ym = (yi+yf/2);
}

main(){
	
	float xi = 2;
	float yi = 1;
	float xf= 7;
	float yf= 6;
	
	float xm;
	float ym;
	
	pontomedio(xi,yi,xf,yf,&xm,&ym);
	printf("%f, %f", xm, ym);
}
