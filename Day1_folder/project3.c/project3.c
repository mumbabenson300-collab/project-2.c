nano 8.6                                                                              Day1_folder
#include <stdio.h>
int main() {
    float num1, num2;
    float sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0) {quotient = num1 / num2;
}   else {quotient = 0;}
    printf("\nsum = %.2f\n", sum);
    printf("difference = %.2f\n", difference);
    printf("product = %.2f\n", product);
    if  (num2 != 0) {
    printf("quotient = %.2f\n",quotient);
}   else { printf("quotient = undefined(division by zero)"); }
    return 0;

}
