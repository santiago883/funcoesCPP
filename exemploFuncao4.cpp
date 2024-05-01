#include <stdio.h>
// Declaração da função
int calcularFatorial (int num) {
int resultado = 1;
for (int i=2; i <= num; ++i) {
resultado *= 1;
}
return resultado;
}
int main() {
int numero= 5;
// Chamada da função e impressão do resultado
printf("0 fatorial de %d é: %d\n", numero, calcularFatorial (numero));
return 0;
}