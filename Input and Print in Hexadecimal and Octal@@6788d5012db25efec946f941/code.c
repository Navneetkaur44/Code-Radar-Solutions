#include <stdio.h>
int main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    printf("hexadecimal: %X\n", num);
    printf("octal: %0\n", num);
    return 0;
}