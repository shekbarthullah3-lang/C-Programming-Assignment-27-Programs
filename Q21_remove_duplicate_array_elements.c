/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 21: Remove Duplicate Array Elements.
 // Explanation: This program removes duplicate values from an array.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n, values[MAX], unique[MAX], uniqueCount = 0; // n is the input count; values stores the input array; unique stores values without duplicates; uniqueCount is the current size of unique.
    printf("Enter array size (1 to %d): ", MAX);   // Displays a prompt asking the user to enter the array size (1 to %d).
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid array size.\n");           // Displays an error message if the array size is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d integers: ", n);              // Displays a prompt asking the user to enter %d integers.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        if (scanf("%d", &values[i]) != 1) {        // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
            printf("Invalid input.\n");            // Displays an error message when the input is invalid.
            return 1;                              // Stops the program with an error status because the input was invalid or an error occurred.
        }                                          // Ends the current function, loop, or conditional block.
    }                                              // Ends the current function, loop, or conditional block.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        int duplicate = 0;                         // A variable representing the first value or an array.
        for (int j = 0; j < uniqueCount; j++) {    // Runs the loop according to its initial value, condition, and increment expression.
            if (values[i] == unique[j]) {          // Compares the current value with values already stored in the unique array.
                duplicate = 1;                     // Sets the duplicate flag to 1 because the same value already exists.
                break;                             // Stops the loop immediately and moves to the next statement.
            }                                      // Ends the current function, loop, or conditional block.
        }                                          // Ends the current function, loop, or conditional block.
        if (!duplicate)                            // Checks whether the current value is not a duplicate.
            unique[uniqueCount++] = values[i];     // Stores the non-duplicate value in the unique array and increases the count.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Array without duplicates: ");          // Displays the calculated result on the screen: Array without duplicates:
    for (int i = 0; i < uniqueCount; i++)          // Runs the loop according to its initial value, condition, and increment expression.
        printf("%d ", unique[i]);                  // Prints information or a result on the screen: %d
    printf("\n");                                  // Prints information or a result on the screen: a newline.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.

