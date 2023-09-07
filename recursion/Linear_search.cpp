#include<iostream>
using namespace std;
void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linear_Search(int arr[], int size, int key) {
    print(arr,size);
    // Base case
    if (size == 0) {
        return false; 
    }
    if (arr[0] == key) {
        return true;
    }
    else {
        bool remain = linear_Search(arr + 1, size - 1, key); 
        return remain;
    }
}

int main() {
    int size = 5;
    int arr[] = {3, 7, 2, 5, 9};
    int key = 5;

    bool found = linear_Search(arr, size, key);

    if (found) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
