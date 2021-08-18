#include <stdio.h>
#include <math.h>

int main(){

    int v1, v2;
    double raiz;

    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &v1, &v2);

    raiz = sqrt(pow(v2, v1));

    printf("- Raiz = %.1lf", raiz);

    return 0;
}