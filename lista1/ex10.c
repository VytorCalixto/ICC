#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include "float_t.h"

void nextFive(float f) {
    Float_t ft;
    ft.f = f;
    int i = 5;
    while(i--) {
        f = ft.f;
        ft.parts.mantissa += 1;
        exploreFloat(ft);
        float difference = fabsf(ft.f - f);
        printf("Diferença entre %1.15f e %1.15f é %1.15f", ft.f, f, difference);
    }
}

int main() {
    float f;
    scanf("Digite um número: %f", &f);
    nextFive(f);
    return 0;
}
