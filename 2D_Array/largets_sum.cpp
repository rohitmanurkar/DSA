#include<iostream>
using namespace std;
int largestrow(int arr[][4],int row ,int col)
{
    int maxi=INT16_MIN;
    int rowindex=0;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];

        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=i;
        }
       
    }
    cout<<"maximum sum is "<<maxi<<endl;
    return rowindex; 


}
int largestcol(int arr[][4],int row ,int col)
{
    int maxi=INT16_MIN;
    int rowindex=0;
    for(int j=0;j<col;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            sum=sum+arr[i][j];

        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=j;
        }
       
    }
    cout<<"maximum sum in column is "<<maxi<<endl;
    return rowindex; 


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
    int ans1=largestrow(arr,3,4);
    int ans2=largestcol(arr,3,4);
    cout<<"largest sum values are in row "<<ans1<< endl;
    cout<<"largest sum values are in col"<<ans2<< endl;
    
    return 0;

}
/*
Certainly! Let's perform a detailed dry run of your C++ code step by step:

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

5. The `largestrow` function is called, which calculates the sum of each row and finds the row with the maximum sum.

   - Row sums:
     ```
     Sum of the elements in row 1: 10
     Sum of the elements in row 2: 26
     Sum of the elements in row 3: 42
     ```

   - The function finds that the maximum sum is in row 3 (42).

6. The `largestcol` function is called, which calculates the sum of each column and finds the column with the maximum sum.

   - Column sums:
     ```
     Sum of the elements in column 1: 15
     Sum of the elements in column 2: 18
     Sum of the elements in column 3: 21
     Sum of the elements in column 4: 24
     ```

   - The function finds that the maximum sum is in column 4 (24).

7. The program prints the results:

   ```
   maximum sum is 42
   maximum sum in column is 24
   ```

8. Finally, the program prints the row and column indices with the largest sums:

   ```
   largest sum values are in row 2
   largest sum values are in col 3
   ```

This code takes user input to fill a 2D array, calculates the row with the largest sum and the column with the largest sum, and then prints the results.

*/