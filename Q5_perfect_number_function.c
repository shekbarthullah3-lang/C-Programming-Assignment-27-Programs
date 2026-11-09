/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 05: Perfect Number Using a Function.
#include <stdio.h>                                      // This header is required to use input/output functions such as printf and scanf.
int isPerfect(int n)                                    // A function that checks whether n is a perfect number and returns the result as an int.
{                                                       // The body of the function starts here.
    long long sum = 0;                                  // Stores the sum of the proper divisors found so far.
    for (int i = 1; i <= n / 2; i++)                   // A loop that searches for proper divisors from 1 up to half of n.
    {
        if (n % i == 0)                                // Checks whether n is divisible by i without a remainder; if so, i is a divisor.
        {    
            sum += i;                                   // Adds i to the divisor sum because i is a proper divisor of n.
        }                                               // Ends the current function, loop, or conditional block.
    }                                                   // Ends the current function, loop, or conditional block.
    return sum == n;                                    // Returns true or false depending on whether the sum of the proper divisors equals n.
}                                                       // Ends the current function, loop, or conditional block.
int main(void)                                          // The main function where program execution begins.
{                                                       // The body of the function starts here.
    int n;                                              // A variable that stores the number entered by the user or an array size.
    printf("Enter a positive integer: ");               // Displays a prompt asking the user to enter a positive integer.
    if (scanf("%d", &n) != 1 || n <= 0)                // Checks whether scanf successfully read the expected input; invalid input is handled as an error.
    {    
        printf("Please enter a positive integer.\n");   // Displays an error message if the input is invalid: Please enter a positive integer.\n
        return 1;                                       // Stops the program with an error status because the input was invalid or an error occurred.
    }                                                   // Ends the current function, loop, or conditional block.
    if (isPerfect(n))                                   // Checks this condition to decide which branch of the program should run.
        printf("%d is a Perfect Number.\n", n);         // Displays the calculated result on the screen: %d is a Perfect Number.\n
    else                                                // Runs this alternative branch when the preceding if condition is false.
        printf("%d is not a Perfect Number.\n", n);     // Displays the calculated result on the screen: %d is not a Perfect Number.\n
    return 0;                                           // Tells the operating system that the program completed successfully.
}                                                       // Ends the current function, loop, or conditional block.
