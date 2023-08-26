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
