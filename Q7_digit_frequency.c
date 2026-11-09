/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 07: Digit Frequency.
#include <stdio.h>                                  // This header is required to use input/output functions such as printf and scanf.
void countDigits(int n, int frequency[10])          // A function that counts each digit and stores the counts in the frequency array.
{                                                   // The body of the function starts here.

    do {                                            // The body of the do-while loop starts here; it runs at least once before its condition is checked.
        int digit = n % 10;                         // A variable that stores the number entered by the user or an array size.
        if (digit < 0) digit = -digit;              // Checks whether the extracted digit is negative. If true, the next statement changes it to a positive value: digit = -digit.
        frequency[digit]++;                         // Increases the count for the digit just found by 1.
        n /= 10;                                    // Uses integer division by 10 to remove the last digit from n.
    } while (n != 0);                               // Ends the current block.
}                                                   // Ends the current function, loop, or conditional block.
int main(void)                                      // The main function where program execution begins.
{                                                   // The body of the function starts here.
    int n;                                          // A variable that stores the number entered by the user or an array size.
    int frequency[10] = {0};                        // Creates an array with 10 positions to store the count of each digit from 0 to 9.
    printf("Enter an integer: ");                   // Displays a prompt asking the user to enter an integer.
    if (scanf("%d", &n) != 1)                      // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {    
        printf("Invalid input.\n");                                 // Displays an error message when the input is invalid.
        return 1;                                                   // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                               // Ends the current function, loop, or conditional block.
    countDigits(n, frequency);                                      // Calls countDigits to count the digits of n and record their frequencies in the array.
    for (int digit = 0; digit <= 9; digit++)                       // Prints the frequency count for each digit from 0 through 9.
    {  
       printf("%d: %d time(s)\n", digit, frequency[digit]);         // Prints information or a result on the screen: %d: %d time(s)\n
    }                                                               // Ends the current function, loop, or conditional block.
    return 0;                                                       // Tells the operating system that the program completed successfully.
}                                                                   // Ends the current function, loop, or conditional block.
