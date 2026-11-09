/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 09: Arithmetic Calculator Using Functions.
#include <stdio.h>                                          // This header is required to use input/output functions such as printf and scanf.
double add(double a, double b)      { return a + b; }       // The add function adds two double values (a + b) and immediately returns the result.
double subtract(double a, double b) { return a - b; }       // The subtract function subtracts b from a and returns the result.
double multiply(double a, double b) { return a * b; }       // The multiply function multiplies a by b and returns the result.
int divide(double a, double b, double *result)              // A function that performs division and stores the result through the result pointer.
{                                                           // The body of the function starts here.
    if (b == 0.0) return 0;                                 // Checks whether the divisor is zero. If so, it returns a failure/error status to the caller.
    *result = a / b;                                        // Divides a by b and stores the result in the caller's result variable through the pointer.
    return 1;                                               // Returns success status 1 to tell the caller that division succeeded.
}                                                           // Ends the current function, loop, or conditional block.

int calculate(double a, double b, char op, double *result)  // A function that selects the correct arithmetic function based on the operator.
{                                                           // The body of the function starts here.
    switch (op) {                                           // Selects which arithmetic operation to perform based on the operator value.
        case '+': *result = add(a, b); return 1;            // If the operator is +, performs addition and returns the status.
        case '-': *result = subtract(a, b); return 1;       // If the operator is -, performs subtraction and returns the status.
        case '*': *result = multiply(a, b); return 1;       // If the operator is *, performs multiplication and returns the status.
        case '/': return divide(a, b, result);              // If the operator is /, performs division and returns the status.
        default: return -1;                                 // If none of the above operators match, returns an invalid-operator status.
    }                                                       // Ends the current function, loop, or conditional block.
}                                                           // Ends the current function, loop, or conditional block.
int main(void)                                              // The main function where program execution begins.
{                                                           // The body of the function starts here.
    double a, b, result;                                    // Stores the two decimal input numbers in a and b, and the calculation result in result.
    char op;                                                // Stores the operator chosen by the user (+, -, *, or /) as a character.
    printf("Enter expression (example: 10 + 5): ");         // Displays a prompt asking the user to enter an expression, for example 10 + 5.
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {            // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                         // Displays an error message when the input is invalid.
        return 1;                                           // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                       // Ends the current function, loop, or conditional block.
    int status = calculate(a, b, op, &result);              // The calculate function returns a status indicating success, division by zero, or an invalid operator.
    if (status == 1)                                        // Checks the status to see whether the calculation completed successfully.
        printf("Result = %.2f\n", result);                  // Displays the calculated result on the screen: Result = %.2f\n
    else if (status == 0)                                   // If the first if condition is false, this condition checks whether division by zero occurred.
        printf("Error: division by zero.\n");               // Displays the error status on the screen: Error: division by zero.\n
    else                                                    // Runs this alternative branch when the preceding if condition is false.
        printf("Invalid operator. Use +, -, * or /.\n");    // Displays an error message if the operator is invalid: Invalid operator. Use +, -, * or /.\n
    return 0;                                               // Tells the operating system that the program completed successfully.
}                                                           // Ends the current function, loop, or conditional block.
