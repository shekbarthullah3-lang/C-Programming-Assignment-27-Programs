/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 03: Factorial.
#include <stdio.h>                                         // This header is required to use input/output functions such as printf and scanf.
int main(void)                                             // The main function where program execution begins.
{                                                          // The body of the function starts here.
    int n;                                                 // A variable that stores the number entered by the user or an array size.
    unsigned long long factorial = 1;                      // A variable representing the first value or an array.
    printf("Enter a number (0 to 20): ");                  // Displays a prompt asking the user to enter a number from 0 to 20.
    if (scanf("%d", &n) != 1)                              // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        {
        printf("Invalid input.\n");                        // Displays an error message when the input is invalid.
        return 1;                                          // Stops the program with an error status because the input was invalid or an error occurred.
        }                                                  // Ends the current function, loop, or conditional block.
    if (n < 0 || n > 20)                                   // Checks whether n is within the allowed factorial range of 0 to 20.
        {
        printf("Please enter a number from 0 to 20.\n");   // Displays an error message if the input is invalid: Please enter a number from 0 to 20.\n
        return 1;                                          // Stops the program with an error status because the input was invalid or an error occurred.
        }                                                  // Ends the current function, loop, or conditional block.

    for (int i = 1; i <= n; i++)                           // A loop that multiplies each number from 1 through n into the factorial.
        {
        factorial *= (unsigned long long)i;                // Multiplies the current factorial value by i and stores the updated result.
        }                                                  // Ends the current function, loop, or conditional block.
    printf("%d! = %llu\n", n, factorial);                  // Prints information or the result on the screen: %d! = %llu\n
    return 0;                                              // Tells the operating system that the program completed successfully.
}                                                          // Ends the current function, loop, or conditional block.
