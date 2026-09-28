#include <stdio.h>
#include <stdlib.h>

int main() {
    int number; 
    float decimal;
    char letter;
    char name[30];

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Enter decimal: ");
    scanf("%f", &decimal);

    printf("Enter letter: ");
    scanf(" %c", &letter);

    printf("Enter name: ");
    scanf("%s", name);

    printf("number entered: %d\ndecimal entered: %.3f\nletter entered: %c\nname entered: %s", number, decimal, letter, name);

    return 0;
}
