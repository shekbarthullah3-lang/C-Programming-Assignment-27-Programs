/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 26: Move Negative Numbers to the Front.
 // Explanation: This program moves negative values to the front and places the other values after them.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n, a[MAX], result[MAX], k = 0;             // n is the array size; a is the input array; result is the rearranged array; k points to the next output position.
    printf("Enter array size (1 to %d): ", MAX);   // Displays a prompt asking the user to enter the array size (1 to %d).
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid array size.\n");           // Displays an error message if the array size is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d integers: ", n);              // Displays a prompt asking the user to enter %d integers.
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1; // Processes each element or term one by one in the loop.

    for (int i = 0; i < n; i++)                    // Processes each element or term one by one in the loop.
        if (a[i] < 0) result[k++] = a[i];          // Checks this condition and, if true, adds the negative value to the result array.

    for (int i = 0; i < n; i++)                    // Processes each element or term one by one in the loop.
        if (a[i] >= 0) result[k++] = a[i];         // Checks this condition and, if true, adds the zero or positive value to the result array.
    printf("Rearranged array: ");                  // Displays the calculated result on the screen: Rearranged array:
    for (int i = 0; i < n; i++) printf("%d ", result[i]); // Processes each element or term one by one in the loop.
    printf("\n");                                  // Prints information or a result on the screen: a newline.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
