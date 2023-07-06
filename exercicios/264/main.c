#include <stdio.h>

int menorDivisor(int n1, int n2, int n3) {
    int fator = 2;
    
    // enquanto tal fator nao dividir nenhum dos 3 numeros
    while ( n1 % fator != 0 && n2 % fator != 0 && n3 % fator != 0 ) {
        fator++;
    }
    
    return fator;
}

int mmc(int n1, int n2, int n3) {
    // condição de parada
    if (n1 == 1 && n2 == 1 && n3 == 1) {
        return 1;
    }
    
    int menor = menorDivisor(n1, n2, n3);
    
    // se tal número for divisível pelo menor divisor encontrado, então divida-o
    
    if (n1 % menor == 0) {
        n1 /= menor;    
    }
    
    if (n2 % menor == 0) {
        n2 /= menor;
    }
    
    if (n3 % menor == 0) {
        n3 /= menor;
    }
    
    return menor * mmc(n1, n2, n3);
}

void main() {
    // leitura
    int n1, n2, n3;
    
    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Informe o valor do segundo numero: ");
    scanf("%d", &n2);
    
    printf("Informe o valor do terceiro numero: ");
    scanf("%d", &n3);
    
    int resultado = mmc(n1, n2, n3);
    printf("O MMC destes 3 numeros eh: %d", resultado);
    
    getch();
}
