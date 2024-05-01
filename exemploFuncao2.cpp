#include <stdio.h>
// Declaração da função
int somar(int a, int b) {
return a + b;
}
int main() {
int num1 = 5, num2 = 3;
// Chamada da função e impressão do resultado
printf("A soma de %d e %d é: %d\n", num1, num2, somar (num1, num2));
return 0;
}