#include <stdint.h>
#include <float.h>
#include "float.h"

void exploreFloat(Float_t ft) {
    printf("Float: %f\t Int: %i\t Mantissa: %i\t Expoente: %i\t Sinal:%i\n",
            ft.f, ft.i, ft.parts.mantissa, ft.parts.exponent, ft.parts.sign);
}
