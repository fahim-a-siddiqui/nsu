#include <stdio.h>

int main() {

    int a, b;
    float c;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Sum of both numbers: %d\n", a+b);
    printf("Subtraction of both numbers: %d\n", a-b);
    printf("Multiplication of both numbers: %d\n", a*b);
    c = (float)a/b;
    printf("Division of both numbers: %.1f\n", c);
    printf("Remainder: %d\n", a%b);
    printf("Square of both numbers: %d, %d\n", a*a, b*b);
    printf("Cubes of both numbers: %d, %d\n", a*a*a, b*b*b);

    return 0;
}
