#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralfunction(vector<vector<int>> &arr)
{
    int n=arr.size();
    int m=arr[0].size();
    //places of top ,left ,right , bottom
    //right and left are columns
    //top and bottom are rows
    int left=0;
    int right=m-1;
    int top=0;
    int bottom=n-1;
    vector<int> ans;
    //a while loop that shows how many times does this for loop run
    while(left<=right && top<=bottom){
    //left to right columns
    for(int i=left;i<=right;i++)
    {
         ans.push_back(arr[top][i]);
    }
    //now top row will be second one
    top++;
    //top to bottom in last column
    for(int i=top;i<=bottom;i++)
    {
        ans.push_back(arr[i][right]);
    }
    //last column will be updated
    right--;
    //right column to left column wit bottom row fixed
    //corner case this for loop will run till top<=bottom
    if(top<=bottom){
    for(int i=right;i>=left;i--)
    {
        ans.push_back(arr[bottom][i]);
    }
    //now take bottom to the second last row
    bottom--;
    }
    //corner case this for loop will run till left<=right
    if(left<=right){
    for(int i=bottom;i>=top;i--)
    {
        ans.push_back(arr[i][left]);
    }
    //update the left side of the matrix
    left++;
    }
}
return ans;
}
int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> spiralOrder = spiralfunction(arr);

    cout << "Spiral Order Traversal: ";
    for (int i = 0; i < spiralOrder.size(); i++) {
        cout << spiralOrder[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
let's perform a dry run of your code step by step with a sample input.

**Input:**
```
Number of rows: 4
Number of columns: 4
Matrix elements:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

**Dry Run:**

1. The code starts by taking the number of rows (4) and columns (4) as input and creates a 4x4 matrix.

2. It then takes the matrix elements as input.

3. The `spiralfunction` is called with this matrix.

4. Inside `spiralfunction`:
   - `n` is set to 4 (number of rows).
   - `m` is set to 4 (number of columns).
   - `left`, `right`, `top`, and `bottom` are initialized to 0, 3, 0, and 3, respectively.
   - An empty vector `ans` is initialized to store the spiral order traversal.

5. The while loop starts, with the condition `left<=right && top<=bottom` being true.

6. In the first iteration of the loop:
   - Elements from the top row (`top=0`) from left to right are added to `ans`: `1 2 3 4`.

7. `top` is incremented to 1.

8. Elements from the first column (`right=3`) from top to bottom are added to `ans`: `5 9 13`.

9. `right` is decremented to 2.

10. Since `top<=bottom` is true, elements from the bottom row (`bottom=3`) from right to left are added to `ans`: `16 15 14`.

11. `bottom` is decremented to 2.

12. Since `left<=right` is true, elements from the second column (`left=1`) from bottom to top are added to `ans`: `10 6`.

13. `left` is incremented to 2.

14. In the next iteration, the loop condition is still true.

15. Elements from the remaining portion of the top row are added to `ans`: `7 8`.

16. `top` is incremented to 2.

17. Elements from the remaining portion of the left column are added to `ans`: `11`.

18. `right` is decremented to 1.

19. The loop continues, and the remaining elements are added to `ans` in the correct order.

20. Finally, the `main` function prints the "Spiral Order Traversal" which is `1 2 3 4 8 12 16 15 14 13 9 5 6 10 11 7`.

That's the spiral order traversal of the input matrix.

*/
