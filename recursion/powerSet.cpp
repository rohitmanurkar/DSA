#include<iostream>
#include<vector>
using namespace std;

void powerset(vector<int>& arr, vector<vector<int>>& ans, vector<int> output, int i) {
    // Base case
    if (i == arr.size()) {
        // If we have processed all elements, add the current 'output' vector to the 'ans' vector
        ans.push_back(output);
        return;
    }

    // Exclude the current element and continue generating subsets
    powerset(arr, ans, output, i + 1);

    // Include the current element and continue generating subsets
    output.push_back(arr[i]);
    powerset(arr, ans, output, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans; // Vector to store the powerset subsets
    vector<int> output;      // Vector to store the current subset being generated

    powerset(arr, ans, output, 0);

    // Print the generated powerset subsets
    cout << "Powerset:" << endl;
    for (const vector<int>& subset : ans) {
        for (int num : subset) {
            cout << num << " "; 
        }
        cout << endl; 
    }

    return 0; 
}
