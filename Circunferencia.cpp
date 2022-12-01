//#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double radio, longitud;

    printf("Digite el radio de la Cicunferencia: \n");
    scanf("%lf", &radio);

    longitud = 2*M_PI*radio;

    printf("La longitud de la circunferencia es: %.3lf \n", longitud);


    return 0;
}
