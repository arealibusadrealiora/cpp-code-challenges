// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(std::string str){
    // Write your code here
    std::transform (str.begin(), str.end(), str.begin(), tolower);
    std::string rts = str;
    std::reverse (rts.begin(), rts.end());
    return str==rts;
}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    std::cin.get();
    return 0;
}
