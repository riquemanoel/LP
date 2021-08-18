#include <stdio.h>
#include <math.h>

int main(){
	
    double a, b, c, x1, x2, delta;

    printf("Coeficiente (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = sqrt(pow(b, 2) - 4 * a * c);
    
    x1 = (-(b) + delta) / (2 * a);
    x2 = (-(b) - delta) / (2 * a);

    printf("- Raizes = %.1lf %.1lf", x1, x2);

    return 0;
}
