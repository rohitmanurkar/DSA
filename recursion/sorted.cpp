#include<iostream>
using namespace std;

bool is_Sorted(int arr[], int size) {
    // Base cases
    if (size == 0 || size == 1) {
        return true; // An empty array or an array with one element is considered sorted.
    }
    
    // Check if the current element is greater than the next element
    if (arr[0] > arr[1]) {
        return false; // The array is not sorted.
    } else {
        // recursive call on the remaining 
        bool ans = is_Sorted(arr + 1, size - 1);
        return ans;
    }
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
    
    if (is_Sorted(arr, size)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    
    return 0;
}
/*
 let's perform a dry run of code to check if an array is sorted in ascending order using recursion. We'll walk through the code step by step with an example:

Suppose we have an array `arr` with the following elements: `[2, 4, 7, 9, 11]`.

1. The program starts in the `main` function.

2. It prompts the user to enter the size of the array and waits for input. Let's input `5`.

   ```plaintext
   Enter the size of the array: 5
   ```

3. The input value `5` is stored in the variable `size`.

4. An array `arr` is declared with the specified size.

5. It prompts the user to enter the elements of the array one by one. Let's input the elements:

   ```plaintext
   Enter the elements of the array:
   2
   4
   7
   9
   11
   ```

   The array `arr` is now `[2, 4, 7, 9, 11]`.

6. It calls the `is_Sorted` function with the arguments `arr` and `size`.

7. Inside the `is_Sorted` function:
   - It checks the base cases:
     - The size of the array is not `0` or `1`, so it proceeds.
   - It compares the first element `arr[0]` (which is `2`) with the second element `arr[1]` (which is `4`). Since `2` is less than `4`, it continues.

8. It makes a recursive call to `is_Sorted` with the remaining elements:

   ```cpp
   is_Sorted(arr + 1, size - 1);
   ```

   - This process repeats, comparing the next pair of elements, until it reaches the last pair `[9, 11]`.

9. When it reaches the pair `[9, 11]`, it compares `9` with `11`. Since `9` is less than `11`, it continues.

10. The recursive calls have checked all pairs of elements in the array and returned `true` for each pair because they are all in ascending order.

11. Finally, the result is returned from the initial `is_Sorted` call.

12. The program displays the result:

    ```plaintext
    The array is sorted.
    ```

So, the code successfully checks that the array `[2, 4, 7, 9, 11]` is sorted in ascending order and prints "The array is sorted."
*/