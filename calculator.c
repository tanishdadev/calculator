#include <stdio.h>
#include <string.h>

double num;
double n;
char operator[10];

double operation(double num, double n);

int main(void)
{
    printf("-------Welcome to the calculator app--------\n");
    printf("Enter the first number: ");
    scanf("%lf", &num);
    printf("Enter the second number: ");
    scanf("%lf", &n);
    printf("Enter the operator: ");
    scanf("%s", operator);

    operation(num, n);
}
double operation(double num, double n)
{
    double result;
    if (strcmp(operator, "+") == 0)
    {
        result = num + n;
    }
    else if (strcmp(operator, "-") == 0)
    {
        result = num - n;
    }
    else if (strcmp(operator, "*") == 0)
    {
        result = num * n;
    }
    else if (strcmp(operator, "/") == 0)
    {
        if (n == 0)
        {
            printf("Error: Division by zero.\n");
            return 1;
        }
        result = num / n;
    }
    else{
        printf("The operator is invalid");
        return 1;
    }

    if (result == (int)result)
    {
        printf("The answer is: %.0lf\n", result);
        return 0;
    }
    else{
        printf("The answer is: %.6lf\n", result);
    }
}
