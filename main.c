#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite uma operação (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite os dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Não é possível dividir por zero.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}
