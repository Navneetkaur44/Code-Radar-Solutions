#include <stdio.h>
int main() {
    int num1, num2, sum;
    if scanf("%d %d", &num1, &num2){
        sum = num1 + num2;
        printf("sum=%d\n", sum);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
