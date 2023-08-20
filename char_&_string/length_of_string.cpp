#include<iostream>
using namespace std;

string reverse_word(string s) {
    int st = 0;
    int e = 0;
    int len = s.size(); // Store the length of the string

    for (int i = 0; i < len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            e = i - 1;
            while (st < e) {
                swap(s[st], s[e]);
                st++;
                e--;
            }
            st = i + 1; // Move st to the next word's start
        }
    }

    // Reverse the last word
    e = len - 1;
    while (st < e) {
        swap(s[st], s[e]);
        st++;
        e--;
    }

    return s; // Return the modified string
}

int main() {
    string s;
    cout << "Enter a sentence: " << endl;
    cin>>s;

    string a = reverse_word(s); // Store the reversed string in 'a'

    cout << a << endl; // Print the modified string
}
