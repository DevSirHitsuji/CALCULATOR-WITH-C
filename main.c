#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double num1, num2;

    printf("*calculadora com as 4 opera��es b�sicas*");
    printf("opera��o: ");

    scanf("%d", "%c", "%d", &num1, &op, &num2);

    switch (op) {
    case "+": printf(num1 + " + " + num2 + "= "+ (num1+num2))

    case "-": printf(num1 + " - " + num2 + "= "+ (num1-num2))

    case "*": printf(num1 + " * " + num2 + "= "+ (num1*num2))

    case "/": printf(num1 + " / " + num2 + "= "+ (num1/num2))

    default:
        printf("digite corretamente!");

    }

    return 0;
}
