/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 // Question 27: Add Two Complex Numbers Using a Structure.
 // Explanation: This program adds two complex numbers using a structure.
 // Note: The // comment at the end of each code line explains the purpose of that line in English.

#include <stdio.h>                                 // This header is required to use input/output functions such as printf and scanf.
typedef struct {                                   // Begins defining a structure type named Complex.
    double real;                                   // A variable representing the first value or an array.
    double imaginary;                              // A variable that stores the number entered by the user or an array size.
} Complex;                                         // Ends the structure definition and names the type Complex.
Complex addComplex(Complex a, Complex b)           // A function that adds two complex numbers and returns the resulting Complex value.
{                                                  // The body of the function starts here.
    Complex result;                                // Creates a Complex structure variable to store the real and imaginary parts of the sum.
    result.real = a.real + b.real;                 // Adds the real parts of the two complex numbers.
    result.imaginary = a.imaginary + b.imaginary;  // Adds the imaginary parts of the two complex numbers.
    return result;                                 // Returns the result value to the calling function.
}                                                  // Ends the current function, loop, or conditional block.
void displayComplex(Complex c)                     // A function that prints a complex number in real plus/minus imaginary form.
{                                                  // The body of the function starts here.
    if (c.imaginary < 0)                           // Checks whether the imaginary part is negative and prints it with a minus sign if so.
        printf("%.2f - %.2fi\n", c.real, -c.imaginary); // Prints information or a result on the screen: %.2f - %.2fi\n
    else                                           // Runs this alternative branch when the preceding if condition is false.
        printf("%.2f + %.2fi\n", c.real, c.imaginary); // Prints information or a result on the screen: %.2f + %.2fi\n
}                                                  // Ends the current function, loop, or conditional block.
int main(void)                                     // The main function where program execution begins.
{                                                  // The body of the function starts here.
    Complex first, second, sum;                    // Creates three structure variables for the first complex number, the second complex number, and their sum.
    printf("Enter real and imaginary parts of first number: "); // Displays a prompt asking the user to enter the real and imaginary parts of the first number.
    if (scanf("%lf %lf", &first.real, &first.imaginary) != 2) return 1; // Checks whether scanf read the expected number of inputs; if input is invalid, it handles the error. If the condition is true, returns a success/true status to the caller.
    printf("Enter real and imaginary parts of second number: "); // Displays a prompt asking the user to enter the real and imaginary parts of the second number.
    if (scanf("%lf %lf", &second.real, &second.imaginary) != 2) return 1; // Checks whether scanf read the expected number of inputs; if input is invalid, it handles the error. If the condition is true, returns a success/true status to the caller.
    sum = addComplex(first, second);               // Stores the calculated or selected value in a variable.
    printf("Sum = ");                              // Displays the calculated result on the screen: Sum =
    displayComplex(sum);                           // Calls the function that prints the sum in the correct plus or minus form.
    return 0;                                      // Tells the operating system that the program completed successfully.
}                                                  // Ends the current function, loop, or conditional block.
