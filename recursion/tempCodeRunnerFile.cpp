 vector<string> ans; // Vector to store the generated combinations
    string output = ""; // Current output string
    int index = 0; // Index to keep track of the current digit being processed
    
    const string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    phone(digit, output, ans, index, mapping);

    return ans;
}