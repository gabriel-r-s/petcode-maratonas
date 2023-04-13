#include <cstdio>
#include <algorithm>
#include <array>
#include <cstdint>


struct Pair {
    uint8_t n, mod;

    static bool cmp(Pair a, Pair b) {
        return a.mod < b.mod;
    }
};


int main() {
    int testes;
    std::array<Pair, 200> nums;

    if (scanf("%d", &testes) != 1) return 1;
    for (; testes > 0; --testes) {
        uint8_t buckets, len;
        if (scanf("%d %d", &buckets, &len) != 2) return 1;

        // ler os numeros `n` e pre-calcular todos `n%buckets`
        for (int i = 0; i < len; ++i) {
            Pair p;
            if (scanf("%d", &p.n) != 1) return 1;
            p.mod = p.n % buckets;
            nums[i] = p;
        }
        // ordenacao estavel para manter a ordem que foram lidos em cada bucket
        std::stable_sort(nums.begin(), nums.begin()+len, Pair::cmp);

        // ja que estao ordenados/agrupados por criterio %buckets
        // podemos para cada bucket, ler o `j` atual
        // até j >= len ou o numero na posicao `j`
        // enquanto n != bucket (mod buckets)
        for (int i = 0, j = 0; i < buckets; ++i) {
            printf("%d -> ", i);
            for (; j < len && nums[j].mod == i; j++) {
                printf("%d -> ", nums[j].n);
            }
            printf("\\\n");
        }
        printf("\n");
    }
    return 0;
}

