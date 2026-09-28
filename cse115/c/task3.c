#include <stdio.h>
#include <stdlib.h>

int main() {

    float temp;
    printf("Enter temperature value in degrees celsius: ");
    scanf("%f", &temp);
    temp = temp * (9/5) + 32;

    printf("Temperature value in degrees fahrenheit: %.3f", temp);
    return 0;

}
