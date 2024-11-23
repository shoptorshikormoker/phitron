#include <stdio.h>

int main()
{
    int x = 104, y = 777;
    char op;

    printf("Enter an operator (+, -, *, /, &, |, ^, ~, < for left shift, > for right shift): ");
    scanf(" %c", &op); // Take the operator as input

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    
    case '%':
        printf("%d %% %d = %d\n", x, y, x % y);
        break;
    

        // bitwish operator//
    case '&':
        printf("%d & %d = %d\n", x, y, x & y);
        break;
    case '|':
        printf("%d | %d = %d\n", x, y, x | y);
        break;
    case '^':
        printf("%d ^ %d = %d\n", x, y, x ^ y);
        break;
    case '~':
        printf("~%d = %d\n", x, ~x);
        printf("~%d = %d\n", y, ~y);
        break;
    case '<':
        printf("%d << 2 = %d\n", x, x << 2);
        printf("%d << 2 = %d\n", y, y << 2);
        break;
    case '>':
        printf("%d >> 2 = %d\n", x, x >> 2);
        printf("%d >> 2 = %d\n", y, y >> 2);
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}