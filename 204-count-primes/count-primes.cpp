class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<uint8_t> isPrime(n, 1);
        int count = n / 2; 
        for (int i = 3; (long long)i * i < n; i += 2) {
            if (isPrime[i]) {
                for (long long j = (long long)i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = 0;
                        count--; 
                    }
                }
            }
        }

        return count;
    }
};