#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // Skip non-alphanumeric from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        // Skip non-alphanumeric from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare in lowercase
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;

    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Valid Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    return 0;
}