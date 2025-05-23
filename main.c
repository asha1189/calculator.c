#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int multi(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    return (float)a / b;
}
int main() {
    int choice;
    int num1, num2;
    while (1) {
        printf("\n------------ Calculator Menu ------------\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("6. Cool Message Corner\n");
        printf("-----------------------------------------------------\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nExit. See you next time! TaTa!\n");
            break;
        }
        if (choice == 6) {
            printf("\nCool Message Corner:\n");
            printf("Hisheb korlam tho onek!! Eibar ektu cha kaw \n");
            break;
        }
        if (choice >= 1 && choice <= 4) {
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            if (choice == 1) {
                printf("Result: %d + %d = %d\n", num1, num2, sum(num1, num2));
            } else if (choice == 2) {
                printf("Result: %d - %d = %d\n", num1, num2, sub(num1, num2));
            } else if (choice == 3) {
                printf("Result: %d * %d = %d\n", num1, num2, multi(num1, num2));
            } else if (choice == 4) {
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
                }
            }
        } else {
            printf("Invalid choice! Please select a valid option (1–6).\n");
        }
    }
}
