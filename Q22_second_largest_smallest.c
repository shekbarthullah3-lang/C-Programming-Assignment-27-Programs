/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 22: Second Largest and Second Smallest.
 // Explanation: This program finds the distinct second-smallest and second-largest values in an array.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n, a[MAX];                                 // n stores the array size; a[MAX] is an array that stores the input integers.
    printf("Enter array size (2 to %d): ", MAX);   // Displays a prompt asking the user to enter the array size (2 to %d).
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Please enter a size from 2 to %d.\n", MAX); // Displays an error message if the size is invalid: Please enter a size from 2 to %d.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d integers: ", n);              // Displays a prompt asking the user to enter %d integers.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        if (scanf("%d", &a[i]) != 1) {             // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
            printf("Invalid input.\n");            // Displays an error message when the input is invalid.
            return 1;                              // Stops the program with an error status because the input was invalid or an error occurred.
        }                                          // Ends the current function, loop, or conditional block.
    }                                              // Ends the current function, loop, or conditional block.
    int minValue = a[0], maxValue = a[0];          // Initializes both minimum and maximum with the first value in the array.
    for (int i = 1; i < n; i++) {                  // Processes each element or term one by one in the loop.
        if (a[i] < minValue) minValue = a[i];      // Checks whether the current array value is smaller than the minimum found so far. If true, sets the current element as the new minimum.
        if (a[i] > maxValue) maxValue = a[i];      // Checks whether the current array value is larger than the maximum found so far. If true, sets the current element as the new maximum.
    }                                              // Ends the current function, loop, or conditional block.
    int secondSmall = 0, secondLarge = 0;          // Creates variables for the distinct second-smallest and second-largest values and initializes them to 0.
    int hasSecondSmall = 0, hasSecondLarge = 0;    // Initializes two flags to 0 to track whether the distinct second-smallest and second-largest values have been found.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        if (a[i] > minValue && (!hasSecondSmall || a[i] < secondSmall)) { // Checks whether the current value is the smallest value found so far that is greater than the minimum.
            secondSmall = a[i];                    // Stores the new candidate for the distinct second-smallest value.
            hasSecondSmall = 1;                    // Records that the distinct second-smallest value has been found.
        }                                          // Ends the current function, loop, or conditional block.
        if (a[i] < maxValue && (!hasSecondLarge || a[i] > secondLarge)) { // Checks whether the current value is the largest value found so far that is smaller than the maximum.
            secondLarge = a[i];                    // Stores the new candidate for the distinct second-largest value.
            hasSecondLarge = 1;                    // Records that the distinct second-largest value has been found.
        }                                          // Ends the current function, loop, or conditional block.
    }                                              // Ends the current function, loop, or conditional block.
    if (hasSecondSmall) printf("Second smallest = %d\n", secondSmall); // Checks whether a distinct second-smallest value was found. If true, prints the required result.
    else printf("No distinct second smallest value.\n"); // Prints an alternative result or message when the if condition is false.
    if (hasSecondLarge) printf("Second largest = %d\n", secondLarge); // Checks whether a distinct second-largest value was found. If true, prints the required result.
    else printf("No distinct second largest value.\n"); // Prints an alternative result or message when the if condition is false.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
