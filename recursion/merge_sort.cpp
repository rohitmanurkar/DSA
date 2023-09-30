#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays of 'arr'.
// First subarray is arr[s..m]
// Second subarray is arr[m+1..e]
void merge(vector<int> &arr, int s, int m, int e) {
    vector<int> ans;
    int i = s;
    int j = m + 1;
    
    // Merge the two subarrays into 'ans'
    while (i <= m && j <= e) {
        if (arr[i] <= arr[j]) {
            ans.push_back(arr[i]); // Add the smaller element from the left subarray
            i++;
        } else {
            ans.push_back(arr[j]); // Add the smaller element from the right subarray
            j++;
        }
    }
    
    // If there are remaining elements in the left subarray, add them
    while (i <= m) {
        ans.push_back(arr[i]);
        i++;
    }
    
    // If there are remaining elements in the right subarray, add them
    while (j <= e) {
        ans.push_back(arr[j]);
        j++;
    }
    
    // Copy the sorted elements from 'ans' back to 'arr'
    for (int k = s; k <= e; k++) {
        arr[k] = ans[k - s];
    }
}

void mergesort(vector<int> &arr, int s, int e) {
    // Base case: If there is only one element or no elements, return.
    if (s >= e) {
        return;
    }
    
    // Calculate the middle index of the current subarray
    int mid = s + (e - s) / 2;
    
    // Recursively sort the left and right subarrays
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    
    // Merge the sorted left and right subarrays
    merge(arr, s, mid, e);
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    
    mergesort(arr, 0, n - 1);
    
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
