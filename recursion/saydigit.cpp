#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    // Base case
    if (n == 0) {
        return;
    }
    
    // Extract the last digit
    int digit = n % 10;
    n=n/10;
    
    // Recursive call with the remaining digits
    sayDigit(n, arr);
    
    // Print the digit from the array
    cout << arr[digit] << " ";
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    sayDigit(n, arr);
    
    return 0;
}
/*
 let's perform a dry run of  that converts a given number into words using recursion. We'll use an example to demonstrate how the code works:

Suppose we want to convert the number `245` into words.

1. The program starts in the `main` function.

2. It prompts the user to enter a number and waits for input. Let's input `245`.

   ```plaintext
   Enter the number: 245
   ```

3. The input value `245` is stored in the variable `n`.

4. It initializes an array `arr` with words representing digits from 0 to 9.

5. It calls the `sayDigit` function with the arguments `n` (245) and `arr`.

6. Inside the `sayDigit` function:
   - The base case checks if `n` is `0`. It's not, so we proceed.
   - It calculates the last digit of `n` by taking the remainder when divided by 10. In this case, `digit` becomes `5`.

7. It updates `n` by removing the last digit. So, `n` becomes `24`.

8. It makes a recursive call to `sayDigit` with the updated `n` and the same `arr`:

   ```cpp
   sayDigit(24, arr);
   ```

   - This process repeats, extracting the last digit `4` and then `2` and making recursive calls with the remaining digits.

9. Eventually, the recursive calls reach the base case when `n` becomes `0`.

10. The recursive calls start to return and print the corresponding words for each digit:

    - `sayDigit(2, arr)` returns "two" and prints "two ".
    - `sayDigit(4, arr)` returns "four" and prints "four ".
    - `sayDigit(5, arr)` returns "five" and prints "five ".

11. The printed words are concatenated, and the final result is displayed:

    ```plaintext
    two four five
    ```

So, the code successfully converts the number `245` into words: "two four five".
*/