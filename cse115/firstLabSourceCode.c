#include <stdio.h>
#include <stdlib.h>



/*int main()
{
    printf("Hello world!\n");
    return 0;
}*/





/*int main()
{
    printf("North South University\n");
    return 0;
}*/




/*int main()
{
    printf("North South University welcome to 1st lab class\n");
    return 0;
}*/



/*int main()
{
    printf("North South University.\nWelcome to 1st lab class\n");
    return 0;
}*/




int main()
{
    printf("\t North South University \n \n");
    printf("Hello class of cse115L!! Welcome to NSU. \n");
}



/*int main()
{
    printf("\t " North South University" \n \n");
    printf("Hello class of cse115L!! Welcome to NSU. \n");
}*/













/*int main(){
    int num;
    float deci;
    char letter;
    char name[30];

    num = 10;
    deci = 25.5;
    letter = 'A';
    //name = "CSE115 section 1.";
    //strcpy(name, "CSE115 section 1.");

    printf("The number is %d\n",num);
    printf("The number is %.2f\n",deci);
    printf("The letter is: %c\n", letter);
    printf("Your name is: %s\n", name);
}*/




/*int main(){
    int num = 10;
    float deci = 25.5;
    char letter = 'A';
    char name[] = "CSE115 section 1.";

    printf("The number is %d\n",num);
    printf("The number is %.2f\n",deci);
    printf("The letter is: %c\n", letter);
    printf("Your name is: %s\n", name);
}*/






/*
int    → scanf("%d", &num);
float  → scanf("%f", &deci);
char   → scanf(" %c", &letter);
string → scanf("%19s", name);
*/


/*
int main()
{
    int num;
    float deci;
    char letter;
    char name[20];

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is %d\n", num);

    printf("Enter a decimal number: ");
    scanf("%f", &deci);
    printf("The number is %.2f\n", deci);

    printf("Enter a letter: ");
    scanf(" %c", &letter);
    printf("The letter is: %c\n", letter);

    printf("Enter your name: ");
    scanf("%19s", name);
    printf("Your name is: %s\n", name);

    return 0;
}
*/




// Full sting input and output
/*
int main()
{
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your full name is: %s", name);

    return 0;
}
*/















/*
int main(){
    int a;
    float b;
    double c;
    char d;
    long int longInt;
    signed int no;

    printf("Size of int: %d bytes\n",sizeof(a));
    printf("Size of float: %d bytes\n",sizeof(b));
    printf("Size of double: %d bytes\n",sizeof(c));
    printf("Size of char: %d byte\n",sizeof(d));
    printf("Size of Long int: %dbyte\n",sizeof(longInt));
    printf("Size of signed int: %d byte\n",sizeof(no));

    return 0;
}
*/


/*
"int, long int, and signed int may show the same size on our computer.
signed int is essentially the same as int. long int is a separate integer type that
is guaranteed to have at least as much range as int, but C does not guarantee that it
will take more bytes. The actual size depends on the system and compiler."
*/








/*
int main()
{
    float const PI = 3.142;
    float radius;
    float area, circumference, diameter;

    printf("Enter the radius of a circle:");
    scanf("%f",&radius);
    diameter= 2*radius;

    circumference= 2*PI*radius;
    area= PI * radius * radius;

    printf("The Diameter is: %.2f \n",diameter);
    printf("The Circumference is: %.2f\n",circumference);
    printf("The area is: %.2f\n",area);
}
*/


