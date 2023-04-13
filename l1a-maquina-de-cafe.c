#include <stdio.h>
#include <stdlib.h>

// retorna o menor entre 3 ints
int min3(int a, int b, int c) {
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    // calcula todas as opcoes de andares, e aceita a melhor
    int c1 = b*2 + c*4;
    int c2 = 2*a + 2*c;
    int c3 = 4*a + 2*b;
    int viagens = min3(c1, c2, c3);
    printf("%d\n", viagens);
}

