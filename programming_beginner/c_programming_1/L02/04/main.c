#include <stdio.h>

int main()
{
    int number;
    char letter;
    float realnumber;

    printf("number? ");
    scanf("%d", &number);
    scanf("%c");
    printf("realnumber? ");
    scanf("%f", &realnumber);
    scanf("%c");
    printf("letter? ");
    scanf("%c", &letter);
    printf("number = %d, realnumber = %f, letter = %c\n", number, realnumber, letter);
    return 0;
}
