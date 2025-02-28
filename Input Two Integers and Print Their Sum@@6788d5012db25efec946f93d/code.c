#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("sum=%d\n", sum);

    return 0;
}
