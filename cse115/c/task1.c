#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;

    printf("Numbers you entered after swaping: %d %d", a, b);
    return 0;

}

