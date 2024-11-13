#include <stdio.h>

int main()
{
    printf("    123456789012345678901234567890\n");
    printf("+ : %10d\t%10d\n", 123, 12345);
    printf("- : %-10d\t%-10d\n\n", 123, 12345);
    printf("+ : %10.2f\t%.2f\n", 98.765, 987654.123);
    printf("- : %-.2f\t%-10.2f\n\n", 98.765, 987654.123);
    printf("+ : %15s\n", "Hello World");
    printf("- : %-15s\n", "Hello World");
    return 0;
}
