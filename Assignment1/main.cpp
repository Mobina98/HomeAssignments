// Include the standard input/output stream library for printing text
#include <iostream>
// Include the custom header file that declares the hello() function
#include "hello.h"

// The main function - the starting point of the program
int main() {
    // Set the program's locale to English for proper character handling
    setlocale(LC_ALL, "English");
    // Print "Hello World!" to the console and add a newline
    std::cout << "Hello World!\n";

    // Start an infinite loop to keep the program running
    while (true) {
        // Call the hello() function (likely gets user input) and store the result in 'input'
        std::string input = hello();
        // Print a personalized greeting using the stored input
        std::cout << "Hello " + input + "!\n";
    }
// End of the infinite loop
}
// End of the main function