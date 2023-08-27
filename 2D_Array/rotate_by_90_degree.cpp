#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size();
    for(int i = 0; i < row; i++) {
        for(int j = 0; j <= i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i = 0; i < row; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Certainly, let's perform a dry run of  code with a sample input.

**Input:**
```
Enter the size of the square matrix: 3
Enter the matrix elements:
1 2 3
4 5 6
7 8 9
```

**Dry Run:**

1. The program starts by taking the size of the square matrix, `n = 3`, as input.

2. It creates a 3x3 matrix `matrix` and takes the matrix elements as input.

3. It prints the original matrix:
```
Original Matrix:
1 2 3
4 5 6
7 8 9
```

4. It calls the `rotate` function, which performs the following steps:
   - `row` is set to 3 (the size of the matrix).
   - It enters a loop with `i` from 0 to 2.
     - In the first iteration (i=0), it enters another loop with `j` from 0 to 0.
     - It swaps `matrix[0][0]` with itself (no change).
     - It moves to the next iteration with `j` from 0 to 1.
     - It swaps `matrix[0][1]` with `matrix[1][0]`, resulting in the following change:
     ```
     1 4 3
     2 5 6
     7 8 9
     ```
     - It continues swapping elements in a similar fashion for the remaining iterations.
   - After transposing, it reverses each row of the matrix:
     ```
     7 4 1
     8 5 2
     9 6 3
     ```

5. It prints the rotated matrix:
```
Rotated Matrix:
7 4 1
8 5 2
9 6 3
```

This is the rotated matrix after applying the `rotate` function to the original matrix.

*/