#include <iostream>
#include <string>

// Macros changes the way some text is generated by the compiler

// never do this silly thing with preprocessors
#define WAIT std::cin.get()

#define LOG(x) std::cout << x << std::endl

// u can define functions with more than one line using the backslash
#define MAIN int main() \
{\
	LOG("Hello!");\
	WAIT;\
}

// using main function with a macro
MAIN