#include <iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j) {
    //base case
    if (i >j) {
        return true;
    }
    //recursive function
    if (str[i] != str[j]) {
        return false;
    } else {
        return checkpalindrome(str, ++i, --j);
    }
}

int main() {
    string str = "rorrr";
    bool ispalindrome = checkpalindrome(str, 0, str.length() - 1);
    
    if (ispalindrome) {
        cout << "It is a palindrome" << endl;
    } else {
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}