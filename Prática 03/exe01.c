#include <stdio.h> 
#include <math.h>

int main(){

    int a, b;
    double rest;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &a, &b);

    rest = pow(a, b);

    printf("- Potencia = %.1lf", rest);


    return 0;
}