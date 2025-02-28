#include <stdio.h>
int main() {
    int a,b, sum;
    if scanf("%d %d", &a, &b){
        sum = a + b;
        printf("sum=%d", sum);
    } else {
        printf("Invalid input");
    }
    return 0;
}
