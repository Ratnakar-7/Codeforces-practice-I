#include <iostream>
#include <vector>
using namespace std;

void printPrimes(int n) {
    vector<bool> isPrime(n+1, true); // initialize all values to true
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) { // if i is prime, mark all multiples of i as not prime
            cout << i << " "; // print the prime number
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    printPrimes(n);
    return 0;
}
