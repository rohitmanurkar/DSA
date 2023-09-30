#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s]; 
    int cnt = 0;
    for(int i = s + 1; i <= e; i++) {
        if(arr[i] <= pivot) {
            cnt++; // Count elements smaller than or equal to the pivot
        }
    }
    int pivotIndex = s + cnt; // Calculate the pivot index after partitioning

    // Place the pivot element at its correct position in the array
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex) {
        // Move i to the right until an element greater than pivot is found
        while(arr[i] <= pivot) {
            i++;
        }
        // Move j to the left until an element smaller than  pivot is found
        while(arr[j] > pivot) {
            j--;
        }
        // Swap elements to move them to the correct side of the pivot
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex; // Return the pivot index
}

void quickSort(int arr[], int s, int e) {
    if(s >= e) {
        return; // Base case: if the subarray has one or zero elements, it's already sorted
    }
    int p = partition(arr, s, e); // Get the pivot index
    // Recursively sort the subarrays to the left and right of the pivot
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[6] = {2, 4, 1, 6, 9, 0};
    int n = 6;
    quickSort(arr, 0, n - 1); 
    cout << "After sorting" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}
