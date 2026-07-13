#include <stdio.h>
int main() {
    int a,b,choice;
    float result;
    char ch;
    do{
   printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the second number: ");
scanf("%d", &b);
    printf("\n===== Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        result= a+b;
        break;
        case 2:
        result= a-b;
        break;
        case 3:
        result= a*b;
        break;
       case 4:
    if (b != 0)
        result = (float)a / b;
    else {
        printf("Error: Division by zero is not allowed.\n");
       return 1;
    }
    break;
        case 5:
    if (b != 0)
        result = a % b;
    else {
        printf("Error: Modulo by zero is not allowed.\n");
        return 1;
    }
    break;
        default :
        printf("Invalid case");
        break;
        
    }
 printf("Result: %.2f\n", result); 
   
      printf("Do you want to continue? (y/n): ");
    scanf(" %c", &ch);

} while(ch == 'y' || ch == 'Y');
 return 0;
}