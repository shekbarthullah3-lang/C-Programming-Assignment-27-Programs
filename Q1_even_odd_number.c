/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 01: Even // Odd Number

#include <stdio.h>                                 //This header is required to use input/output functions such as printf and scanf.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    int number;                                    // A variable that stores the number entered by the user.
    printf("Enter an integer: ");                  // Displays a prompt asking the user to enter an integer.
    if (scanf("%d", &number) != 1)                 // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {   
        printf("Invalid input.\n");                // Displays an error message when the input is invalid.
        return 1;                                  // Stops the program with an error status because the input was invalid or an error occurred.
    }                                              // Ends the current function, loop, or conditional block.

    if (number % 2 == 0)                           // Checks whether the remainder is zero when the number is divided by 2.
    {                                                
        printf("%d is an even number.\n", number); // Displays the calculated result on the screen: %d is an even number.\n
    } 
    else 
    {                                              // Starts the alternative else block when the if condition is false; the if block ends before this.
        printf("%d is an odd number.\n", number);  // Displays the calculated result on the screen: %d is an odd number.\n
    }                                              // Ends the current function, loop, or conditional block.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
