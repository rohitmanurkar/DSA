#include<iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion
int getfactorial(int i) {
    // Base case: If i is 0, the factorial is 1.
    if (i == 0) {
        return 1;
    }
    
    // Recursive case: Multiply i by the factorial of (i-1).
    return i * getfactorial(i - 1);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    // Call the getfactorial function to calculate the factorial of n
    int ans = getfactorial(n);
    
    // Display the result
    cout << "Factorial of given n is " << ans << endl;
    
    return 0;
}
/*
 let's perform a dry run  code to calculate the factorial of a number. We'll walk through the code step by step with an example:

Suppose we want to calculate the factorial of `n = 5`.

1. The program starts in the `main` function.
2. It prompts the user to enter a number and waits for input. Let's input `5`.

   ```plaintext
   Enter the number: 5
   ```

3. The input value `5` is stored in the variable `n`.

4. Next, the program calls the `getfactorial` function with the argument `n`, which is `5`.

5. Inside the `getfactorial` function:
   - The function checks if `i` (which is currently `5`) is equal to `0`. It's not, so we move to the recursive part.
   - The function returns `5 * getfactorial(5 - 1)`.

6. Now, the `getfactorial` function is called again with `i` as `4` (i.e., `getfactorial(4)`). It repeats the same steps:
   - It checks if `i` is `0`, which is not the case, so it returns `4 * getfactorial(4 - 1)`.

7. This process continues until `getfactorial(1)` is called. Each time, the function multiplies the current value of `i` by the result of the recursive call with `i - 1`.

8. Finally, when `getfactorial(0)` is called:
   - It checks if `i` is `0`, which is true.
   - It returns `1`.

9. So, the call stack starts to unwind, and the calculations are performed:
   - `getfactorial(1)` returns `1 * 1 = 1`
   - `getfactorial(2)` returns `2 * 1 = 2`
   - `getfactorial(3)` returns `3 * 2 = 6`
   - `getfactorial(4)` returns `4 * 6 = 24`
   - `getfactorial(5)` returns `5 * 24 = 120`

10. Back in the `main` function, the result of `getfactorial(5)` is stored in the `ans` variable.

11. The program then displays the result:

    ```plaintext
    Factorial of given n is 120
    ```

So, the factorial of `5` is calculated as `5! = 120`, and the program correctly displays this result.
*/