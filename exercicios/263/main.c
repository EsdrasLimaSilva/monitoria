// Quase a mesma ideia da questão 262

#include <stdio.h>

int mod(int x, int y) {
    if ( x < y ) {
        return x;
    }
    
    return mod(x - y, y);
}

/*

Teste Prático:

x = 11
y = 3

11 - 3 = 8
8 - 3 = 5
5 - 3 = 2
2 < 3
(Resto = 2)

*/

void main() {
    int x, y;
    
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    
    int resto = mod(x, y);
    printf("O resto da divisao de %d por %d eh: %d", x, y, resto);
    
    getch();
}
