#include<stdio.h> 

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers <= 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime (all divisors checked)
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num)); // 1 if prime, 0 if not
    }
    return 0;
}


