/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 25: Pairs Equal to a Target Sum.
 // Explanation: This program finds pairs of array values whose sum equals the given target sum.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n, a[MAX], target, found = 0;              // n is the array size; a is the input array; target is the required sum; found is a flag indicating whether a pair was found.
    printf("Enter array size (1 to %d): ", MAX);   // Displays a prompt asking the user to enter the array size (1 to %d).
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid array size.\n");           // Displays an error message if the array size is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d integers: ", n);              // Displays a prompt asking the user to enter %d integers.
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1; // Processes each element or term one by one in the loop.
    printf("Enter target sum: ");                  // Displays a prompt asking the user to enter the target sum.
    if (scanf("%d", &target) != 1) return 1;       // Checks whether scanf read the expected number of inputs; if input is invalid, it handles the error. If the condition is true, returns a success/true status to the caller.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        for (int j = i + 1; j < n; j++) {          // Runs the loop according to its initial value, condition, and increment expression.
            if (a[i] + a[j] == target) {           // Checks whether the sum of two different array elements equals the target value.
                printf("%d + %d = %d\n", a[i], a[j], target); // Prints information or a result on the screen: %d + %d = %d\n
                found = 1;                         // Records that a pair matching the target sum has been found.
            }                                      // Ends the current function, loop, or conditional block.
        }                                          // Ends the current function, loop, or conditional block.
    }                                              // Ends the current function, loop, or conditional block.
    if (!found) printf("No pair has the target sum.\n"); // Checks whether no pair matching the target sum has been found yet. If true, prints the appropriate result.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
