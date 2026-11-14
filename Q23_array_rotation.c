/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 23: Array Rotation.
 // Explanation: This program rotates an array to the left or right.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
#define MAX 100                                    // Defines MAX as the maximum array size of 100.
void reverseRange(int a[], int left, int right)    // A function that reverses the part of an array from index left through index right.
{                                                  // The body of the function starts here.
    while (left < right) {                         // Repeats the loop until the left and right positions meet in the middle.
        int temp = a[left];                        // A variable representing the first value or an array.
        a[left] = a[right];                        // Places the value at the right end into the left position.
        a[right] = temp;                           // Places the old left value, temporarily stored, into the right position.
        left++;                                    // Moves the left index to the next position.
        right--;                                   // Moves the right index to the previous position.
    }                                              // Ends the current function, loop, or conditional block.
}                                                  // Ends the current function, loop, or conditional block.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int n, a[MAX];                                 // n stores the array size; a[MAX] is an array that stores the input integers.
    unsigned int k;                                // A variable that represents the rotation amount or the next output position.
    char direction;                                // A variable that stores the number entered by the user or an array size.
    printf("Enter array size (1 to %d): ", MAX);   // Displays a prompt asking the user to enter the array size (1 to %d).
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid array size.\n");           // Displays an error message if the array size is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter %d integers: ", n);              // Displays a prompt asking the user to enter %d integers.
    for (int i = 0; i < n; i++) {                  // Processes each element or term one by one in the loop.
        if (scanf("%d", &a[i]) != 1) return 1;     // Checks whether scanf read the expected number of inputs; if input is invalid, it handles the error. If the condition is true, returns a success/true status to the caller.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Enter rotation count and direction (L/R): "); // Displays a prompt asking the user to enter the rotation count and direction (L/R).
    if (scanf("%u %c", &k, &direction) != 2 || (direction != 'L' && direction != 'l' && direction != 'R' && direction != 'r')) { // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
        printf("Invalid rotation input.\n");       // Displays an error message if the rotation input is invalid.\n
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.
    k %= (unsigned int)n;                          // Uses the modulus of the rotation count and array length to remove unnecessary full rotations.
    if (direction == 'R' || direction == 'r') {    // Checks this condition to decide which branch of the program should run.
        if (k != 0) k = (unsigned int)n - k;       // Checks this condition to decide how the program should continue. If true, sets k to the array length minus k.
    }                                              // Ends the current function, loop, or conditional block.
    if (k != 0) {                                  // Checks this condition to decide which branch of the program should run.
        reverseRange(a, 0, (int)k - 1);            // Calls reverseRange to reverse a section of the array; this is one step of the rotation algorithm.
        reverseRange(a, (int)k, n - 1);            // Calls reverseRange to reverse a section of the array; this is one step of the rotation algorithm.
        reverseRange(a, 0, n - 1);                 // Calls reverseRange to reverse a section of the array; this is one step of the rotation algorithm.
    }                                              // Ends the current function, loop, or conditional block.
    printf("Rotated array: ");                     // Displays the calculated result on the screen: Rotated array:
    for (int i = 0; i < n; i++) printf("%d ", a[i]); // Processes each element or term one by one in the loop.
    printf("\n");                                  // Prints information or a result on the screen: a newline.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
