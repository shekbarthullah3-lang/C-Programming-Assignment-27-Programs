/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 04: Fibonacci Series.
#include <stdio.h>                                          // This header is required to use input/output functions such as printf and scanf.
int main(void)                                              // The main function where program execution begins.
{                                                           // The body of the function starts here.
    int n;                                                  // A variable that stores the number entered by the user or an array size.
    unsigned long long first = 0, second = 1, next;         // Initializes the first two Fibonacci values to 0 and 1; the next value is temporarily stored in next.
    printf("Enter number of terms (1 to 93): ");            // Displays a prompt asking the user how many terms to print, from 1 to 93.
    if (scanf("%d", &n) != 1) {                             // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid input.\n");                         // Displays an error message when the input is invalid.
        return 1;                                           // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                       // Ends the current function, loop, or conditional block.
    if (n < 1 || n > 93)                                    // Checks whether the requested number of Fibonacci terms is between 1 and 93.
        {
        printf("Please enter between 1 and 93 terms.\n");   // Displays an error message if the input is invalid: Please enter between 1 and 93 terms.\n
        return 1;                                           // Stops the program with an error status because the input was invalid or an error occurred.
        }                                                   // Ends the current function, loop, or conditional block.
    for (int i = 0; i < n; i++)                             // Processes each element or term one by one in the loop.
        {
        printf("%llu", first);                              // Prints information or a result on the screen: %llu
        if (i < n - 1)                                      // Checks whether the loop should continue to process the next element or term.
        {    
            printf(" ");                                    // Prints information or a result on the screen.
            next = first + second;                          // Adds the previous two Fibonacci numbers to calculate the next number.
            first = second;                                 // Moves the current second Fibonacci number into the first position.
            second = next;                                  // Stores the newly calculated Fibonacci number in the second position.
        }                                                   // Ends the current function, loop, or conditional block.
    }                                                       // Ends the current function, loop, or conditional block.
    printf("\n");                                           // Prints information or a result on the screen: a newline.
    return 0;                                               // Tells the operating system that the program completed successfully.
}                                                           // Ends the current function, loop, or conditional block.
