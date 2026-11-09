/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 06: GCD Using Recursion.
#include <stdio.h>                                                  // This header is required to use input/output functions such as printf and scanf.
int gcd(int a, int b)                                               // A function that calculates the GCD of two numbers recursively.
{                                                                   // The body of the function starts here.
    if (b == 0)                                                     // Checks whether b is zero; this is the base case that stops the recursion.
    {    
        return a;                                                   // When b is zero, returns a as the final GCD.
    }                                                               // Ends the current function, loop, or conditional block.
    return gcd(b, a % b);                                           // Calls gcd again with a smaller subproblem and returns its result.
}                                                                   // Ends the current function, loop, or conditional block.
int main(void)                                                      // The main function where program execution begins.
{                                                                   // The body of the function starts here.
    int a, b;                                                       // A variable representing the first value or an array.
    printf("Enter two positive integers: ");                        // Displays a prompt asking the user to enter two positive integers.
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0)            // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {    
        printf("Please enter two positive integers.\n");            // Displays an error message if the input is invalid: Please enter two positive integers.\n
        return 1;                                                   // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                               // Ends the current function, loop, or conditional block.
    printf("GCD = %d\n", gcd(a, b));                                // Displays the calculated result on the screen: GCD = %d\n
    return 0;                                                       // Tells the operating system that the program completed successfully.
}                                                                   // Ends the current function, loop, or conditional block.
