//Decidi criar um cabeçalho para poder reaproveitar o código
typedef union {
    int32_t i;
    float f;
    // Bitfields
    struct {
        uint32_t mantissa: 23;
        uint32_t exponent: 8;
        uint32_t sign: 1;
    } parts;
}Float_t;

void exploreFloat(Float_t f);
