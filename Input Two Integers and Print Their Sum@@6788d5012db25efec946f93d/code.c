#include <stdio.h>
int main() {
    int num1, num2, sum;
    if scanf("%d %d", &num1, &num2){
        sum = num1 + num2;
        printf("sum=%d", sum);
    } else {
        printf("Invalid input");
    }
    return 0;
}
