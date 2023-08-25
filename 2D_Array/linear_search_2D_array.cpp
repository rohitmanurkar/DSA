#include<iostream>
using namespace std;
//i=rows
//j=columns
bool found(int arr[][4],int i,int j,int target){

    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}


int main(){
   
    int arr[2][4];
    cout<<"give elements of array";
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the target"<< endl;
    cin>>target;
    if(found(arr,2,4,target))
    {
        cout<<"elemnt found"<< endl;

    }
    else{
        cout<<"elemnt not found";
    }
    return 0;
}
/*
Certainly! Here's a step-by-step dry run of  code:

Input:
Let's assume the following inputs are provided by the user:
```
give elements of array
1 2 3 4
5 6 7 8
enter the target
6
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
5. The user is prompted to enter a target number, and they enter `6`.

Now, the `found` function is called with the array, dimensions (2, 4), and the target (6).

6. Inside the `found` function, there's a nested loop to iterate through the 2D array:
   - First Iteration (i=0, j=0):
     - `arr[0][0]` is 1, not equal to the target (6).
   - Iterations continue until all elements are checked.

7. The `found` function returns `false` because the target (6) is not found in the array.

8. Back in the `main` function, it checks the return value from `found` and prints "element not found" because the function returned `false`.

So, the final output of your program will be:
```
element not found
```

This is because the target number (6) was not present in the array.

*/