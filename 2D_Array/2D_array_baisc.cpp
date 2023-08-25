#include<iostream>
using namespace std;
int main(){
    //declaration
    int arr[2][4];
    cout<<"give elements of array";
    //taking input
    //i=rows
    //j=columns
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Certainly! Here's a step-by-step dry run of code:

Input:
Let's assume the following inputs are provided by the user:
```
give elements of array
1 2 3 4
5 6 7 8
```

Dry Run:

1. The `main` function is called.

2. An empty 2D array `arr` with dimensions 2x4 is declared.

3. The user is prompted to enter elements of the array.

   - User inputs:
     ```
     1 2 3 4
     5 6 7 8
     ```

4. The elements are stored in the array, and it's printed:

   ```
   1 2 3 4 
   5 6 7 8 
   ```

5. The program completes and returns 0, indicating successful execution.

This code simply takes user input to fill a 2D array and then prints the array.

*/