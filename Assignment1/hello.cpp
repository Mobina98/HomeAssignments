// Include the standard input/output library for std::cin and std::getline
#include <iostream>

// Define the hello() function, which returns a string
std::string hello() {
    // Set the locale to English for proper character handling
    setlocale(LC_ALL, "English");
    // Declare a string variable named 'input' to store user text
    std::string input;
    // Read a full line of text from the user and save it in 'input'
    std::getline(std::cin, input);
    // Send the contents of the 'input' variable back to the caller
    return input;
}
// End of the hello() function