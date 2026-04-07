#include<iostream>
namespace my_namespace {
    // Define a function inside the namespace
    void my_function() {
        std::cout << "Hello, world!" << std::endl;
    }
}

int main() 
{
    // Call the function inside the namespace
    my_namespace::my_function();
     
    // Call the function outside the namespace
    using my_namespace::my_function;
    my_function();

    return 0;
}
