#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool binarysearch(vector<vector<int>>& arr, int target) {
    int n = arr.size();
    int m = arr[0].size();
    int s = 0;
    int e = (n * m) - 1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
        int element = arr[mid / m][mid % m];
        if (element == target) {
            return true;
        }
        if (element < target) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the matrix elements in sorted order:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"matrix is"<< endl;
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    if (binarysearch(arr, target)) {
        cout << "Element found in the matrix." << endl;
    }
    else {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}
/*
Certainly! Let's perform a dry run of your code with a specific example:

Suppose we have the following input:

- Number of rows (n): 4
- Number of columns (m): 3

Matrix entered by the user:
```
1  3  5
7  9  11
13 15 17
19 21 23
```

- The code initializes a 4x3 matrix `arr` and populates it with the provided values.

Matrix after initialization:
```
1  3  5
7  9  11
13 15 17
19 21 23
```

- The code then asks the user to enter the target element to search for. Let's say the user enters `15`.

- The binary search algorithm will operate on this sorted matrix:

```
1  3  5
7  9  11
13 15 17
19 21 23
```

- It performs binary search on the flattened version of this matrix (considering it as a sorted 1D array).

1. Initially, `s` (start) is set to 0, `e` (end) is set to 11, and `mid` is calculated as 5.

2. The element at `arr[1][1]` is 9, which is less than the target (15). So, it updates `s` to 6.

3. Now, `s` is 6, `e` is 11, and `mid` is calculated as 8.

4. The element at `arr[2][2]` is 17, which is greater than the target (15). So, it updates `e` to 7.

5. Since `s` is still less than or equal to `e`, it continues.

6. Now, `s` is 6, `e` is 7, and `mid` is calculated as 6.

7. The element at `arr[2][0]` is 13, which is less than the target (15). So, it updates `s` to 7.

8. Now, `s` is 7, `e` is 7, and `mid` is calculated as 7.

9. The element at `arr[2][1]` is 15, which is equal to the target (15). The search is successful.

- The code returns `true` as the element 15 is found in the matrix.

- The program prints "Element found in the matrix."

This is a successful execution of the code with an example where the target element is found in the matrix.

*/