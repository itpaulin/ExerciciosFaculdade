#include <stdio.h>

float abs (float x){
    
    if ( x < 0){
        return -x;
    }
    else 
        return x;
}


main(){
    float x;

    printf("Digiet um numero para calcular o valor absoluto dele: ");
    scanf("%f",&x);

    printf("%f",abs(x));

}

