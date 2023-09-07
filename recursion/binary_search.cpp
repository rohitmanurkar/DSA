#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {
    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binary_search(int arr[], int s, int e, int key) {
    //base case
    if (s > e) {
        return false;
    }
    int mid = s + (e - s) / 2;
    print(arr,s,e);
    cout << "element at mid is " << arr[mid] << endl;
    
    //element found
    if (arr[mid] == key) {
        return true;
    }
    
    if (arr[mid] > key) {
        return binary_search(arr, s, mid - 1, key); 
    } else {
        return binary_search(arr, mid + 1, e, key);
    }
}

int main() {
    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 22;

    cout << "Present or not " << binary_search(arr, 0, size - 1, key) << endl;

    return 0;
}
