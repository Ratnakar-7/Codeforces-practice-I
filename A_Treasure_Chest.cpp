#include <iostream>
#include <regex>

int main() {
    std::string str; std::cin>>str;
    std::regex pattern("|\*|");  // The backslashes escape the special characters "|", "*", and "|".
    
    if (std::regex_search(str, pattern)) {
        std::cout << "in" << std::endl;
    } else {
        std::cout << "out" << std::endl;
    }
    
    return 0;
}
