#include <stdio.h>
#include <math.h>

int main(){

    double ca, co, hip;

    printf("Catetos (CO CA): ");
    scanf("%lf %lf", &co, &ca);

    hip = sqrt(pow (co, 2) + pow(ca, 2));

    printf("- Hipotenusa = %.1lf", hip);

    return 0;
} 