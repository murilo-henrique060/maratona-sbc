#include <stdio.h>
#include <stdlib.h>

// Solução O(N + Q)
int main() {
    // Pré Procesamento (Vetor Acumulado) O(N)
    int N;
    scanf("%d", &N);

    int *c = malloc(sizeof(int) * N);
    int *v = malloc(sizeof(int) * N);

    int ci, vi;
    int cs = 0, vs = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d\n", &ci, &vi);
        
        cs += ci;
        vs += vi;

        c[i] = cs;
        v[i] = vs;
    }

    // Buscas O(Q)
    int Q;
    scanf("%d", &Q);

    int n;
    for (int i = 0; i < Q; i++) {
        scanf("%d", &s);

        int cn = c[s-1];
        int vn = v[s-1];

        float r = (float)(cn - vn) / (float)(cn + vn);

        printf(r > 0 ? "COMPRA\n" : r < 0 ? "VENDA\n" : "NEUTRO\n");
    }

    return 0;
}