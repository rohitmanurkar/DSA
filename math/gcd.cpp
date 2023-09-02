#include<iostream>
using namespace std;
/*Relation between gcd and lcm
lcm(a,b)*gcd(a,b)=a*b
*/
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b){
        if(a>b)
        {
            a=a-b;
        }
        if(a<b)
        {
            b=b-a;
        }
    }
    return a;
}
int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
/*
Certainly, let's perform a dry run of the provided code with some example inputs.

**Example Input:**
- num1 = 24
- num2 = 18

1. The program starts by asking the user to enter the first number. In this case, the user enters 24.

2. Next, the program asks the user to enter the second number. The user enters 18.

3. The program then calls the `gcd` function with `num1` (24) and `num2` (18) as arguments.

4. Inside the `gcd` function:
   - Since `b` (18) is not equal to 0, it enters the `while` loop.
   - In the first iteration, `a` (24) is greater than `b` (18), so it subtracts `b` from `a`, resulting in `a` becoming 6.
   - In the second iteration, `b` (18) is greater than `a` (6), so it subtracts `a` from `b`, resulting in `b` becoming 12.
   - In the third iteration, `a` (6) is still not equal to `b` (12), so it continues.
   - In the fourth iteration, `b` (12) is greater than `a` (6), so it subtracts `a` from `b`, resulting in `b` becoming 6.
   - In the fifth iteration, `a` (6) is equal to `b` (6), so the loop exits.

5. The `gcd` function returns 6 as the greatest common divisor of 24 and 18.

6. Back in the `main` function, the result (6) is printed as the GCD of 24 and 18.

**Output:**
```
Enter the first number: 24
Enter the second number: 18
GCD of 24 and 18 is: 6
```

So, the code correctly calculates and prints the GCD of the two input numbers, which is 6 in this example.
*/



