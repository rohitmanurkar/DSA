#include<iostream>
using namespace std;

// Function to calculate the number of ways to climb 'n' stairs using recursion
int stair(int n) {
    // Base cases:
    // If 'n' is negative, there are no ways to climb the stairs, return 0.
    if (n < 0) {
        return 0;
    }
    // If 'n' reaches 0, we have successfully climbed all stairs, return 1.
    if (n == 0) {
        return 1;
    } 
    // Recursive function
    int ans = stair(n - 1) + stair(n - 2);
    
    // Return the result.
    return ans;
}

int main() {
    int n;
    
    cout << "Enter the number of stairs: ";
    cin >> n;
    int ans = stair(n);
    
    cout << "Number of ways to climb " << n << " stairs are: " << ans << endl;
    
    return 0;
}
/*
Certainly, let's perform a dry run to calculate the number of ways to climb a staircase with 'n' steps using recursion. We'll walk through the code step by step with an example:

Suppose we want to find the number of ways to climb a staircase with 4 steps.

1. The program starts in the `main` function.

2. It prompts the user to enter the number of stairs and waits for input. Let's input `4`.

   ```plaintext
   Enter the number of stairs: 4
   ```

3. The input value `4` is stored in the variable `n`.

4. It calls the `stair` function with the argument `n`, which is `4`.

5. Inside the `stair` function:
   - It checks the base cases:
     - First, it checks if `n` is negative (which it's not), so it proceeds.
     - Second, it checks if `n` is equal to `0` (which it's not), so it proceeds to the recursive calculation.

6. In the recursive case, it calculates the number of ways to climb 'n-1' stairs and 'n-2' stairs:

   - For 'n-1' stairs (3 steps), it calls `stair(3)`.
     - Inside `stair(3)`:
       - It checks the base cases:
         - It's not negative, and it's not equal to 0, so it proceeds to the recursive calculation.
       - It calculates `stair(2) + stair(1)`.

   - For 'n-2' stairs (2 steps), it calls `stair(2)`.
     - Inside `stair(2)`:
       - It checks the base cases:
         - It's not negative, and it's not equal to 0, so it proceeds to the recursive calculation.
       - It calculates `stair(1) + stair(0)`.

7. The recursive process continues, breaking down the problem into smaller subproblems.

   - `stair(3)` breaks down into `stair(2) + stair(1)`.
   - `stair(2)` breaks down into `stair(1) + stair(0)`.

8. The recursive calls eventually reach the base cases:

   - `stair(1)` returns `1` because there's one way to climb one step.
   - `stair(0)` returns `1` because there's one way to climb zero steps (by not climbing).

9. The recursive calculations are then performed:

   - `stair(1) + stair(0)` in `stair(2)` becomes `1 + 1 = 2`.
   - `stair(2) + stair(1)` in `stair(3)` becomes `2 + 1 = 3`.
   - `stair(3) + stair(2)` in the main `stair(4)` call becomes `3 + 2 = 5`.

10. Finally, the result is returned from the main `stair(4)` call, and it's `5`.

11. The program displays the result:

    ```plaintext
    Number of ways to climb 4 stairs are: 5
    ```

So, there are 5 different ways to climb a staircase with 4 steps, as calculated by the code.

*/