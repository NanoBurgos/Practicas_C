#include <stdio.h>

void cuentaRegresiva(int n) {
    if (n == 0) {
        printf("¡Despegue!\n");  // Caso base
    } else {
        printf("%d\n", n);
        cuentaRegresiva(n - 1);  // Caso recursivo
    }
}

int main() {
    cuentaRegresiva(5);
    return 0;
}