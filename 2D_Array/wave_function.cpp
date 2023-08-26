#include<iostream>
#include <vector>
using namespace std;
vector<int> wavefunction(vector<vector<int>> arr,int row, int col)
{
    vector<int> ans;
    //to traverse in column wise
    for(int j=0;j<col;j++)
    {
        //for odd columns to print bottom to top
        if(j&1)
        {
        for(int i=row-1;i>=0;i--)
        {
           ans.push_back(arr[i][j]);
        }
    }
    else{
        for(int i=0;i<row;i++)
        {
            ans.push_back(arr[i][j]);
        }
    
    }

}
return ans;
}

int main()
{
    int row, col;
    cout<<"enter number of rows"<< endl;
    cin>>row;
    cout << "enter number of columns "<< endl;
    cin>>col;
    //vector declaration
    vector<vector<int>> arr(row,vector<int>(col));
    cout<< " enter the matrix elemnt"<< endl;
    //input loop
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];

        }
    }
    cout<<"wave  solution is as follow "<< endl;
    vector<int> final=wavefunction(arr,row,col);
    //output
    for(int i=0;i<final.size();i++)
    {
        cout<<final[i]<<" ";
    }
    cout <<endl;
    return 0;
}
/*
Certainly, let's perform a step-by-step dry run of code:

Input provided by the user:
```
enter number of rows
3
enter number of columns
4
enter the matrix element
1 2 3 4
5 6 7 8
9 10 11 12
```

Dry Run:

1. The `main` function is called.

2. The user is prompted to enter the number of rows, and they enter 3.

3. The user is prompted to enter the number of columns, and they enter 4.

4. A 2D vector `arr` with dimensions 3x4 is declared and initialized as follows:
   ```
   arr = [
     [0, 0, 0, 0],
     [0, 0, 0, 0],
     [0, 0, 0, 0]
   ]
   ```

5. The user is prompted to enter matrix elements. They enter the matrix as provided:

   ```
   1 2 3 4
   5 6 7 8
   9 10 11 12
   ```

   The `arr` vector is updated to:
   ```
   arr = [
     [1, 2, 3, 4],
     [5, 6, 7, 8],
     [9, 10, 11, 12]
   ]
   ```

6. The user is asked for a wave solution. The `wavefunction` function is called with `arr`, `row=3`, and `col=4`.

7. Inside the `wavefunction` function:

   - It enters a loop to iterate through each column.

   - Column 1 (index 0): It's an even column, so it starts from the top and goes to the bottom, pushing elements into the `ans` vector:
     ```
     ans = [1, 5, 9]
     ```

   - Column 2 (index 1): It's an odd column, so it starts from the bottom and goes to the top, pushing elements into the `ans` vector:
     ```
     ans = [1, 5, 9, 10, 6, 2]
     ```

   - Column 3 (index 2): Even column, top to bottom, pushing elements into the `ans` vector:
     ```
     ans = [1, 5, 9, 10, 6, 2, 3, 7, 11]
     ```

   - Column 4 (index 3): Odd column, bottom to top, pushing elements into the `ans` vector:
     ```
     ans = [1, 5, 9, 10, 6, 2, 3, 7, 11, 12, 8, 4]
     ```

8. The `wavefunction` function returns the `ans` vector.

9. Back in the `main` function, it prints the wave solution:

   ```
   wave solution is as follows:
   1 5 9 10 6 2 3 7 11 12 8 4
   ```

This code takes user input to fill a 2D vector, processes the matrix in a wave-like pattern, and prints the values in that pattern.

*/