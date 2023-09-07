#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    // Base cases
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return arr[0];
    }
    
    // Recursive function
    int remaining = getSum(arr + 1, size - 1);
    int sum = arr[0] + remaining;
    return sum;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = getSum(arr, size);
    cout << "The sum of the elements in the array is: " << result << endl;

    return 0;
}
