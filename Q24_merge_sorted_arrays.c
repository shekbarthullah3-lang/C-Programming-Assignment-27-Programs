/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 24: Merge Two Sorted Arrays.
 // Explanation: This program merges two arrays sorted in ascending order.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n1, n2, a[MAX], b[MAX], merged[2 * MAX];   // n1/n2 are the sizes of the two arrays; a/b are the input arrays; merged is the combined output array.
    printf("Enter sizes of the two sorted arrays: "); // Displays a prompt asking the user to enter the sizes of the two sorted arrays.
    if (scanf("%d %d", &n1, &n2) != 2 || n1 < 0 || n1 > MAX || n2 < 0 || n2 > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid array sizes.\n");          // Displays an error message if the array sizes are invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d ascending values for array A: ", n1); // Displays a prompt asking the user to enter %d ascending values for array A.
    for (int i = 0; i < n1; i++) if (scanf("%d", &a[i]) != 1) return 1; // Processes each element or term one by one in the loop.
    printf("Enter %d ascending values for array B: ", n2); // Displays a prompt asking the user to enter %d ascending values for array B.
    for (int i = 0; i < n2; i++) if (scanf("%d", &b[i]) != 1) return 1; // Processes each element or term one by one in the loop.
    int i = 0, j = 0, k = 0;                       // i and j are indexes for the input arrays; k points to the next position in the merged array.
    while (i < n1 && j < n2) {                     // The block repeats while this condition is true.
        if (a[i] <= b[j]) merged[k++] = a[i++];    // Checks this condition to decide the next step. If true, copies a[i] into merged[k] and advances both indexes.
        else merged[k++] = b[j++];                 // Increases the required counter/index or moves to the next position in the array.
    }                                              // Ends the current function, loop, or conditional block.
    while (i < n1) merged[k++] = a[i++];           // The block repeats while this condition is true.
    while (j < n2) merged[k++] = b[j++];           // The block repeats while this condition is true.
    printf("Merged sorted array: ");               // Displays the calculated result on the screen: Merged sorted array:
    for (int p = 0; p < k; p++) printf("%d ", merged[p]); // Runs the loop according to its initial value, condition, and increment expression.
    printf("\n");                                  // Prints information or a result on the screen: a newline.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.

