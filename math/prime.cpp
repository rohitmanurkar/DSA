 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 
 int countPrimes(int n) {
        int count=0;
        vector<bool>prime(n+1 ,true);
        prime[0]=prime[1]=false;
        
        for(int i=0;i<n ;i++)
        {
            if(prime[i]){
                count++;
                
                for(int j= i*2;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        
        return count;
    }
    int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    int result = countPrimes(n);
    cout << "Number of prime numbers less than " << n << ": " << result << endl;

    return 0;
}
/*              SIEVE OF ERATOSTHENES
Certainly, let's dry run the `countPrimes` function with `n = 20`:

1. `n` is set to 20.

2. Initialize `count` to 0.

3. Create a boolean vector `prime` of size 21 (from 0 to 20), all initialized to `true`, except `prime[0]` and `prime[1]`, which are set to `false`.

4. Start a loop from `i = 2` to `i < 20`:

   - For `i = 2`:
     - Increment `count` to 1.
     - Start an inner loop from `j = 4` to `j < 20`, incrementing `j` by 2 each time. Set `prime[j]` to `false` (multiples of 2).

   - For `i = 3`:
     - Increment `count` to 2.
     - Start an inner loop from `j = 6` to `j < 20`, incrementing `j` by 3 each time. Set `prime[j]` to `false` (multiples of 3).

   - For `i = 4`, `i = 5`, ..., `i = 19`:
     - These values are skipped since `prime[i]` is already `false`.

5. End the loop because `i` reaches 20.

6. Return `count`, which is 8.

So, the function correctly counts that there are 8 prime numbers less than 20.


*/