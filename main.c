#include <stdio.h>
#include "operations.h"

int main(){
    int choice, number1, number2, result;

    printf("\n\tCalculator\n");
    printf("1. Add \n2. Subtract\n3. Multiply\n4. Divide\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number_1: ");
    scanf("%d", &number1);

    printf("Enter number_2: ");
    scanf("%d", &number2);

    printf("\n");

    switch(choice){
        case 1: 
            result = add(number1, number2);
            break;
        case 2:
            result = subtract(number1, number2);
            break;
        case 3:
            result = multiply(number1, number2);
            break;
        case 4:
            result = divide(number1, number2);
            break;
        default:
            printf("Invalid choice.\n");
        }

    printf("\n");

    printf("The result is: %d", result);

    return 0;
}