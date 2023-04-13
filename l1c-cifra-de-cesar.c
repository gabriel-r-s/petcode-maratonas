#include <stdio.h>


int main() {
    char s[51];
    int offset;
    int testes;
    scanf("%d\n", &testes);

    for (; testes > 0; --testes) {
        if (scanf("%s\n%d", &s[0], &offset) != 2) return 1; 
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] -= offset;
            if (s[i] < 'A') {
                s[i] += 26;
            } else if (s[i] > 'Z') {
                s[i] -= 26;
            }
        }
        printf("%s\n", s);
    }
}

