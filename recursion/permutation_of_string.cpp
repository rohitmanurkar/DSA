#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& nums, vector<vector<int>>& ans, int index) {
    // Base case
    if (index >= nums.size()) {
        ans.push_back(nums); // Add the current permutation to the result vector
        return;
    }
    
    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]); // Swap elements to create a permutation
        permutation(nums, ans, index + 1); // Recursively generate permutations
        swap(nums[index], nums[i]); // Backtrack by swapping elements back
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result; 

    permutation(nums, result, 0);

    cout << "Permutations:" << endl;
    for (const vector<int>& perm : result) {
        for (int num : perm) {
            cout << num << " "; 
        }
        cout << endl;
    }

    return 0;
}
