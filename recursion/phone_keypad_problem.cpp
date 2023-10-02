#include<iostream>
#include<vector>
using namespace std;
void phone(const string& digit, string output, vector<string>& ans, int index, const string mapping[]) {
    // Base case: If we have processed all the digits in 'digit'
    if (index >= digit.length()) {
        ans.push_back(output); 
        return;
    }
    
    int number = digit[index] - '0'; // Get the current digit as an integer
    string value = mapping[number]; // Get the corresponding characters from the mapping
    
    // Iterate through the characters in 'value'
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]); 
        // Recursively generate combinations
        phone(digit, output, ans, index + 1, mapping); 
        // Backtrack by removing the last character
        output.pop_back(); 
    }
}


vector<string> combination(const string& digit) {
    vector<string> ans; // Vector to store the generated combinations
     if(digit.length()==0){
        return ans;  
    }
    string output = ""; // Current output string
    int index = 0; // Index to keep track of the current digit being processed
    
    const string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    phone(digit, output, ans, index, mapping);

    return ans;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;

    vector<string> result = combination(input);

    cout << "Letter combinations: ";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
