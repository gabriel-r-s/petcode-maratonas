#include <stdio.h>

const int DIGITOS[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };


int main() {
    char c;
    int testes;
    if (scanf("%d\n", &testes) != 1) return 1;

    for (; testes > 0; --testes) {
        int num_leds = 0;
        while (scanf("%c", &c) == 1 && c != '\n') {
            num_leds += DIGITOS[c - '0'];
        }
        printf("%d leds\n", num_leds);
    }
}

