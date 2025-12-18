#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	#include <stdio.h>
	int main() {
    char operator;
    float num1, num2;
    
    printf("Simple  Calculator with C \n");
    printf("Enter a number: ");
    scanf("%f",&num1);
   
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    
     printf("Enter another number: ");
    scanf("%f",&num2);
    

    if (operator == '+') {
        printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
    } 
    else if (operator == '-') {
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
    } 
    else if (operator == '*') {
        printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero is undefined.\n");
        }
    } 
    else {
        printf("Error! '%c' is not a valid operator.\n", operator);
    }

    return 0;
}
	
