#include <iostream>
#include <string>
#include <stdexcept>

void processString(std::string str) {
    if (str.length() < 10) {
        // Throw an exception with an error message
        throw std::runtime_error("String is too short");
    }
    else if (str.length() > 20) {
        // Throw an exception with an error code and message
        throw std::runtime_error("String is too long (code 1234)");
    }
    else {
        // Do something with the string
        std::cout << "String is: " << str << std::endl;
    }
}

int main() {
    try {
        std::string str1 = "Hello world";
        processString(str1);

        std::string str2 = "Hello";
        processString(str2);

        std::string str3 = "This string is too long to process";
        processString(str3);
    }
    catch (const char* e) {
        // Handle the exception
        std::cout << "Exception caught: " << e<< std::endl;
    }

    return 0;
}
