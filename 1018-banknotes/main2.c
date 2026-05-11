#include <stdio.h>

int main() {
    int N, original;
    int n[7] = {0};
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    do{

        scanf("%d", &N);

    }while(!((0 < N )&&(N < 1000000)));
    original = N;

    for (int i = 0; i < 7; i++) {
        n[i] = N / notas[i];   // quantidade de notas
        N = N % notas[i];      // resto
    }

    printf("%d\n", original);
    printf("%d nota(s) de R$ 100,00\n", n[0]);
    printf("%d nota(s) de R$ 50,00\n", n[1]);
    printf("%d nota(s) de R$ 20,00\n", n[2]);
    printf("%d nota(s) de R$ 10,00\n", n[3]);
    printf("%d nota(s) de R$ 5,00\n", n[4]);
    printf("%d nota(s) de R$ 2,00\n", n[5]);
    printf("%d nota(s) de R$ 1,00\n", n[6]);

    return 0;
}