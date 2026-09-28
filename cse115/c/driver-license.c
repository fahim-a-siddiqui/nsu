#include <stdio.h>
#include <stdlib.h>

int main() {
    char answer;
    printf("Do you have a driver's license? (y / n): ");
    scanf("%c", &answer);
    if (answer == 'Y' || answer == 'y') {
        printf("You can pass the checkpoint");
    } else {
        printf("Get a driver's license.");
    }

    return 0;
}
