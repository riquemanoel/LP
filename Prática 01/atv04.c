#include <stdio.h>

int main(){

    int v1, v2, v3, v4;
    v3 = 10;

    v2 = 400;
    v3 = 90 + v3;
    v1 = 9900;
    v4 = v3 + v3;

    printf("- v1 = %i\n", v1);
    printf("- v2 = %i\n", v2);
    printf("- v3 = %i\n", v3);
    printf("- v4 = %i\n", v4);

    return 0;

}