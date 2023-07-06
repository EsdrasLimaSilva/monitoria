/*
x = 7
y = 2

7 / 2 = 3

7 - 2 = 5
5 - 2 = 3
3 - 2 = 1

div(7, 2) = 3
div(5, 2) = 2
div(3, 2) = 1
div(1, 2) = 0
*/

#include <stdio.h>

int div(int x, int y) {
    if ( x < y ) {
        return 0;
    }
    
    return 1 + div(x - y, y);
}

/*
Teste Prático:

x = 10
y = 3

10, 3
10 < 3
div(10, 3) = 1 + div(7, 3)

7, 3
7 < 3
div(7, 3) = 1 + div(4, 3)

4, 3
4 < 3
div(4, 3) = 1 + 0
//////////

*/

void main() {
    // leitura
    int x, y;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    
    int quociente = div(x, y);
    printf("O quociente da divisao de %d por %d eh: %d", x, y, quociente);
    
    getch();
}
