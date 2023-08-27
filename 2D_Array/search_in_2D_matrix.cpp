#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int rindex = 0;
    int cindex = col - 1;
    while (rindex < row && cindex >= 0) {
        int element = matrix[rindex][cindex];
        if (element == target) {
            return true;
        }
        if (element > target) {
            cindex--;
        }
        else {
            rindex++;
        }
    }
    return false;
}

int main() {
    // Example usage:
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);

    if (found) {
        cout << "Element found in the matrix." << endl;
    }
    else {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}
/*
Certainly, let's dry run the code step by step with `target = 9`:

1. The code initializes a 2D matrix named `matrix` with the following values:

   ```
   {{1, 4, 7, 11},
    {2, 5, 8, 12},
    {3, 6, 9, 16},
    {10, 13, 14, 17}}
   ```

2. It prompts the user to enter the target element, and in this case, the user enters `9`.

3. The `searchMatrix` function is called with the `matrix` and `target` as arguments.

4. Inside the `searchMatrix` function:
   
   - `row` is set to 4 (the number of rows in the matrix).
   - `col` is set to 4 (the number of columns in the matrix).
   - `rindex` is initialized to 0 (the starting row).
   - `cindex` is initialized to 3 (the starting column, which is the last column).

5. Now, it enters a `while` loop:

   - At this point, `rindex` is 0, which is less than `row` (4), and `cindex` is 3, which is greater than or equal to 0.

   - It calculates the `element` by accessing `matrix[rindex][cindex]`, which is `matrix[0][3]`, resulting in an `element` of 11.

   - It compares the `element` (11) with the target (9). Since 11 is greater than 9, it takes the "if" branch.

   - `cindex` is decremented, so it becomes 2.

   - The loop continues:

     - It calculates the `element` again by accessing `matrix[0][2]`, which is 7.

     - It compares the `element` (7) with the target (9). Since 7 is less than 9, it takes the "else" branch.

     - `rindex` is incremented, so it becomes 1.

   - The loop continues:

     - It calculates the `element` by accessing `matrix[1][2]`, which is 8.

     - It compares the `element` (8) with the target (9). Since 8 is less than 9, it takes the "else" branch.

     - `rindex` is incremented again, so it becomes 2.

   - The loop continues:

     - It calculates the `element` by accessing `matrix[2][2]`, which is 9.

     - It compares the `element` (9) with the target (9), and they are equal.

   - Since the target was found, the function returns `true`.

6. Back in the `main` function, it receives `true` from `searchMatrix`.

7. It prints "Element found in the matrix."

So, step by step, the code correctly found the target value "9" in the matrix.
*/