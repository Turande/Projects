#include "stdio.h"
#include "float.h"

int main()
{
    char op;
    double a, b, res;

    /* Read operator */
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    /* Read two numbers */
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    /* Define all four operations in the corresponding */
    /* switch-case */
    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            printf("Error! Wrong Operator Value\n");
            res = -DBL_MAX;
    }
    if( res != -DBL_MAX )
        printf("%.2lf", res);
}
