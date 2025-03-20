#include <stdio.h>
int main(){
    double num; 
    printf("Please enter a number: ");
    if (scanf("%lf", &num) != 1) { 
    printf("Invalid input. Please enter a valid number.\n");
    return 1; 
    }
    printf("You entered: %.4lf\n", num); 
    return 0; 
}