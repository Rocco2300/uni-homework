#include <iostream>

bool is_prime(int number) {
    if (number == 0 || number == 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void print_primes(int how_many) {
    int number = 0;
    int primeIndex = 0;

    while (primeIndex < how_many) {
        if (is_prime(number)) {
            std::cout << number << '\n';
            primeIndex++;
        }

        number++;
    }
}

int main() {
    print_primes(20);
}