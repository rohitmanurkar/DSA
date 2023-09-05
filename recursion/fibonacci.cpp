#include<iostream>
using namespace std;

// Function to calculate the Fibonacci number at position 'n' using recursion
int fib(int n) {
    // Base cases:
    // If 'n' is 0, return 0 (Fib(0) = 0).
    if (n == 0) {
        return 0;
    }
    // If 'n' is 1, return 1 (Fib(1) = 1).
    if (n == 1) {
        return 1;
    }
    
    // Recursive case:
    // Calculate Fibonacci numbers for 'n-1' and 'n-2' and sum them up.
    int ans = fib(n - 1) + fib(n - 2);
    
    // Return the result.
    return ans;
}

int main() {
    int n;
    
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;
    int result = fib(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;
    return 0;
}
