#include<iostream>
using namespace std;

// Function to calculate 2 raised to the power of 'p' using recursion
int power_of(int p) {
    // Base case: If 'p' is 0, return 1 as 2^0 is 1.
    if (p == 0) {
        return 1;
    }
    
    // Recursive case: Calculate 2^(p-1) and multiply it by 2.
    return 2 * power_of(p - 1);
}

int main() {
    int p;
    cout << "Enter the power: ";
    cin >> p;
    
    // Call the power_of function to calculate 2^p.
    int ans = power_of(p);
    cout << "Answer is " << ans << endl;
    
    return 0;
}
/*
let's perform a dry run  to calculate 2 raised to the power of a given integer 'p'. We'll walk through the code step by step with an example:

Suppose we want to calculate 2^5.

1. The program starts in the `main` function.

2. It prompts the user to enter the exponent 'p' and waits for input. Let's input `5`.

   ```plaintext
   Enter the power: 5
   ```

3. The input value `5` is stored in the variable `p`.

4. Next, the program calls the `power_of` function with the argument `p`, which is `5`.

5. Inside the `power_of` function:
   - The function checks if `p` is equal to `0`. It's not, so we move to the recursive part.
   - The function returns `2 * power_of(5 - 1)`.

6. Now, the `power_of` function is called again with `p` as `4` (i.e., `power_of(4)`). It repeats the same steps:
   - It checks if `p` is `0`, which is not the case, so it returns `2 * power_of(4 - 1)`.

7. This process continues until `power_of(0)` is called. Each time, the function calculates 2 raised to the power of `(p - 1)` and multiplies it by 2.

8. Finally, when `power_of(0)` is called:
   - It checks if `p` is `0`, which is true.
   - It returns `1`.

9. So, the call stack starts to unwind, and the calculations are performed:
   - `power_of(1)` returns `2 * 1 = 2`
   - `power_of(2)` returns `2 * 2 = 4`
   - `power_of(3)` returns `2 * 4 = 8`
   - `power_of(4)` returns `2 * 8 = 16`
   - `power_of(5)` returns `2 * 16 = 32`

10. Back in the `main` function, the result of `power_of(5)` is stored in the `ans` variable.

11. The program then displays the result:

    ```plaintext
    Answer is 32
    ```

So, 2^5 is calculated as `32`, and the program correctly displays this result. The code demonstrates the concept of recursive exponentiation.
*/