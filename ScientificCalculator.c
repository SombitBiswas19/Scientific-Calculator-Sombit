#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void solveQuadratic(double a, double b, double c) {
    double discriminant, root1, root2;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoots are real and different.\n");
        printf("x = %.2lf and x = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        printf("\nRoots are real and same.\n");
        printf("x = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("\nRoots are complex and different.\n");
        printf("x = %.2lf + %.2lfi and x = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    int choice;
    double num1, num2, result;
    double a, b, c;
    printf("Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("7. Logarithm\n");
    printf("8. Exponential\n");
    printf("9. Modulo\n");
    printf("10. Sine\n");
    printf("11. Cosine\n");
    printf("12. Tangent\n");
    printf("13. Arcsine\n");
    printf("14. Arccosine\n");
    printf("15. Arctangent\n");
    printf("16. Quadratic Equation Solver\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("\nEnter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            printf("\nEnter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            printf("\nEnter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            printf("\nEnter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = num1 / num2;
                                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        case 5:
            printf("\nEnter a number to find square root: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Error: Square root of negative number.\n");
            } else {
                result = sqrt(num1);
                printf("Square root of %.2lf = %.2lf\n", num1, result);
            }
            break;
        case 6:
            printf("\nEnter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 7:
            printf("\nEnter a number to find natural logarithm: ");
            scanf("%lf", &num1);
            if (num1 <= 0) {
                printf("Error: Logarithm of non-positive number.\n");
            } else {
                result = log(num1);
                printf("Natural logarithm of %.2lf = %.2lf\n", num1, result);
            }
            break;
        case 8:
            printf("\nEnter a number to find exponential: ");
            scanf("%lf", &num1);
            result = exp(num1);
            printf("Exponential of %.2lf = %.2lf\n", num1, result);
            break;
        case 9:
            printf("\nEnter two numbers to find remainder: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = fmod(num1, num2);
                printf("Remainder of %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        case 10:
            printf("\nEnter angle in degrees to find sine: ");
            scanf("%lf", &num1);
            result = sin(num1 * PI / 180);
            printf("Sine of %.2lf degrees = %.2lf\n", num1, result);
            break;
        case 11:
            printf("\nEnter angle in degrees to find cosine: ");
            scanf("%lf", &num1);
            result = cos(num1 * PI / 180);
            printf("Cosine of %.2lf degrees = %.2lf\n", num1, result);
            break;
        case 12:
            printf("\nEnter angle in degrees to find tangent: ");
            scanf("%lf", &num1);
            result = tan(num1 * PI / 180);
            printf("Tangent of %.2lf degrees = %.2lf\n", num1, result);
            break;
        case 13:
            printf("\nEnter value to find arcsine: ");
            scanf("%lf", &num1);
            if (num1 < -1 || num1 > 1) {
                printf("Error: Invalid input for arcsine.\n");
            } else {
                result = asin(num1) * 180 / PI;
                printf("Arcsine of %.2lf = %.2lf degrees\n", num1, result);
            }
            break;
        case 14:
            printf("\nEnter value to find arccosine: ");
            scanf("%lf", &num1);
            if (num1 < -1 || num1 > 1) {
                printf("Error: Invalid input for arccosine.\n");
            } else {
                result = acos(num1) * 180 / PI;
                printf("Arccosine of %.2lf = %.2lf degrees\n", num1, result);
            }
            break;
        case 15:
            printf("\nEnter value to find arctangent: ");
            scanf("%lf", &num1);
            result = atan(num1) * 180 / PI;
            printf("Arctangent of %.2lf = %.2lf degrees\n", num1, result);
            break;
        case 16:
            printf("\nEnter coefficients a, b, and c of the quadratic equation ax^2 + bx + c = 0:\n");
	        double a, b, c;
	        printf("a = ");
	        scanf("%lf", &a);
	        printf("b = ");
	        scanf("%lf", &b);
	        printf("c = ");
	        scanf("%lf", &c);
	        solveQuadratic(a, b, c);
	        break;
        case 17:
            printf("\nThank you for using this calculator.\n");
            return 0;
        default:
            printf("\nError: Invalid choice.\n");
    } 
return 0;
}

