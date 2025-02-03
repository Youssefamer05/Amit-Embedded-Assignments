#include <stdio.h>

int main() {
    char operator;
    int number_1, number_2, result;

    printf("Enter Number_1: ");
    scanf("%d", &number_1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number_2: ");
    scanf("%d", &number_2);

    if (operator == '+')
        result = number_1 + number_2;
    else if (operator == '-')
        result = number_1 - number_2;
    else if (operator == '*')
        result = number_1 * number_2;
    else if (operator == '/')
        result = number_1 / number_2;

    printf("The result = %d\n", result);
    
    return 0;
}
