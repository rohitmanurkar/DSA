#include<iostream>
using namespace std;
void row_sum(int arr[][4] ,int row , int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];

        }
        cout<<"sum of the element in row "<<sum;
        cout<<endl;
    }
     
}
void column_sum(int arr[][4] ,int row , int col)
{
    for(int j=0;j<col;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            sum=sum+arr[i][j];

        }
        cout<<"sum of the element in col "<<sum;
        cout<<endl;
    }
     
}
int main()
{
    int arr[3][4];
    cout<<"give elements of array";
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    row_sum(arr,3,4);
    column_sum(arr,3,4);
return 0;
}
/*
Certainly! Let's perform a dry run of  code step by step:

Assume the following input is provided by the user:
```
give elements of array
1 2 3 4
5 6 7 8
9 10 11 12
```

Dry Run:

1. The `main` function is called.

2. An empty 2D array `arr` with dimensions 3x4 is declared.

3. The user is prompted to enter elements of the array.

   - User inputs:
     ```
     1 2 3 4
     5 6 7 8
     9 10 11 12
     ```

4. The elements are stored in the array, and it's printed:

   ```
   1 2 3 4 
   5 6 7 8 
   9 10 11 12 
   ```

5. The `row_sum` function is called, which calculates the sum of each row and prints it.

   - Row sums:
     ```
     Sum of the elements in row 1: 10
     Sum of the elements in row 2: 26
     Sum of the elements in row 3: 42
     ```

6. The `column_sum` function is called, which calculates the sum of each column and prints it.

   - Column sums:
     ```
     Sum of the elements in col 1: 15
     Sum of the elements in col 2: 18
     Sum of the elements in col 3: 21
     Sum of the elements in col 4: 24
     ```

7. The program completes and returns 0, indicating successful execution.

This code takes user input to fill a 2D array, then calculates and prints the sum of each row and each column in the array.

*/