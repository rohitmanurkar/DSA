#include<iostream>
using namespace std;

// Function to print numbers from 1 to 'n' using a recursive approach
void head_rec(int n) {
    // Base case: If 'n' reaches 0, return without printing.
    if (n == 0) {
        return;
    }
    
    // Recursive call: Call 'head_rec' with 'n-1' to print the previous number.
    head_rec(n - 1);
    
    // Printing statement: Print the current number 'n'.
    cout << n << endl;
}

// Function to print numbers from 'n' down to 1 using a recursive approach
void tail_rec(int n) {
    // Base case: If 'n' reaches 0, return without printing.
    if (n == 0) {
        return;
    }
    
    // Printing statement: Print the current number 'n'.
    cout << n << endl;
    
    // Recursive call: Call 'tail_rec' with 'n-1' to print the next number.
   tail_rec(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    head_rec(n);
    cout << endl;
    tail_rec(n);
    return 0;
}
/*
let's perform a dry run  to print numbers from 1 to 'n' and from 'n' down to 1 using recursion. We'll walk through the code step by step with an example:

Suppose we want to print numbers from 1 to 5 and from 5 down to 1.

1. The program starts in the `main` function.

2. It prompts the user to enter a number and waits for input. Let's input `5`.

   ```plaintext
   Enter a number: 5
   ```

3. The input value `5` is stored in the variable `n`.

4. It displays the message "Printing in ascending order (head recursion):".

5. It calls the `head_rec` function with the argument `n`, which is `5`.

6. Inside the `head_rec` function:
   - The function checks if `n` is equal to `0`. It's not, so we move to the recursive part.
   - The function calls `head_rec` with `n-1` (i.e., `head_rec(4)`).

7. The `head_rec(4)` call follows the same process:
   - It checks if `n` is `0`, which is not the case, so it calls `head_rec(3)`.

8. This recursive process continues until `head_rec(1)` is called.

9. At `head_rec(1)`:
   - It checks if `n` is `0`, which is not the case, so it calls `head_rec(0)`.

10. At `head_rec(0)`:
    - The base case is met (n == 0), so it returns without printing anything.

11. The call stack starts to unwind, and the numbers are printed in ascending order:

    ```plaintext
    1
    2
    3
    4
    5
    ```

12. The program displays the message "Printing in descending order (tail recursion):".

13. It calls the `tail_rec` function with the argument `n`, which is still `5`.

14. Inside the `tail_rec` function:
    - It checks if `n` is equal to `0`. It's not, so it prints the current number `n` (which is `5`).

15. The `tail_rec` function then calls `tail_rec` with `n-1` (i.e., `tail_rec(4)`).

16. This recursive process continues similarly to the `head_rec` function, but in this case, it prints the numbers before making the recursive call.

17. At the end of the process, the numbers are printed in descending order:

    ```plaintext
    5
    4
    3
    2
    1
    ```

So, the code successfully prints numbers from 1 to 'n' and from 'n' down to 1 using both head recursion and tail recursion.

*/