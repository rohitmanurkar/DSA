#include <iostream>
using namespace std;

bool checkequal(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool checkpermutation(string s1, string s2) {
    int count1[26] = {0};
    
    // Count the frequency of each character in s1
    for (int i = 0; i < s1.length(); i++) {
        int index1 = s1[i] - 'a';
        count1[index1]++;
    }
    
    int count2[26] = {0};
    int i = 0;
    int len1 = s1.length();
    
    // Check the first window of characters in s2
    while (i < len1) {
        char newch = s2[i];
        int index2 = newch - 'a';
        count2[index2]++;
        i++;
    }
    
    if (checkequal(count1, count2))
        return true;

    // Check for the remaining string in s2
    while (i < s2.length()) {
        char newch = s2[i];
        int index_new = newch - 'a';
        count2[index_new]++;

        char ch = s2[i - len1];
        int index_old = ch - 'a';
        count2[index_old]--;
        i++;

        if (checkequal(count1, count2))
            return true;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (checkpermutation(s1, s2)) {
        cout << "A permutation of the first string is present in the second string." << endl;
    } else {
        cout << "A permutation of the first string is not present in the second string." << endl;
    }

    return 0;
}
