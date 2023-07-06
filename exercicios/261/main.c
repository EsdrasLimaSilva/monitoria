#include <stdio.h>

int f(int N) {
    if (N == 0) {
        return 0;
    }
    
    int ultimo_digito = N % 10;
    return ultimo_digito + f(N / 10);
}

/*
Teste Prático:

N = 123

123 == 0
3
3 + f(123 / 10) //// 6
12 == 0
2
2 + f(12 / 10)  //// 3
1 == 0
1
1 + f(1 / 10) //// 1
0 == 0
//////////

*/

void main() {
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    
    printf("A soma de todos os algarismos de N eh: %d", f(N));
    
    getch();
}
