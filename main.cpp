#include <iostream>
#include <array>
#include <string>
using namespace std;

bool isPalindrome(string);

int main() {
    const string someString{"able was i ere i saw elba"};

    if(isPalindrome(someString)) {
        cout << someString << " is a palindrome" << endl;
    } else {
        cout << someString << " is NOT a palindrome" << endl;
    }
}

bool isPalindrome(const string someString) {
    const int lengthOfString = someString.size();

    if(lengthOfString == 0 || lengthOfString == 1) {
        return true;
    }

    char firstCharacter{someString[0]};
    char lastCharacter{someString[lengthOfString - 1]};


    if(firstCharacter != lastCharacter) {
        return false;
    }

    string restOfString = someString.substr(1, lengthOfString - 2);

    return isPalindrome(restOfString);
}
